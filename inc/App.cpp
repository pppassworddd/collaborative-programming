#include"App.h"
#include"Judge.h"

void App::init(){
    userIO = UserIO();
    questionGen = QuestionGen();
    strManipulate = StrManipulate();
    
    grade = userIO.getGrade(); // 输入年级；
    num = userIO.getQuestionAmount(); // 输入题目数量；

};

int App::gradeToLevel(){
    if(grade == "一年级"||grade == "二年级")return 0;
    if(grade == "三年级"||grade == "四年级")return 1;
    if(grade == "五年级"||grade == "六年级")return 2;

    return 0;
};

void App::start(){
    string poly;
    double res;
    for(int i = 0; i<num;i++){
        poly = questionGen.getPoly(0,gradeToLevel());
        userIO.putStringPoly(poly);
        userAnswer = userIO.getUserAnswer();
        res = strManipulate.calculate(poly);
        if(!Judge(res,userAnswer))wrongAmount++;
    }

    userIO.putRes(wrongAmount);
};