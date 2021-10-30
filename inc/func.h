#include <stdio.h>

#define plus 1
#define minus 2
#define div 3
#define multi 4

struct data
{
    /* data */
    double num[10];  //代表 数据
    int Strnum;  // 总的数字和运算符数量
} quesdata;

int HandleInputGrade(string grade);  // 返回年级

int HandleInputNum();  // 输入题目数量

double HandleInputAnswer();  // 用户输入答案

void HandleOutput();

double GenQuestion(int level);

int Level_12(data quesdata);

int Level_34(data quesdata);

double Level_56(data quesdata);

bool Judge(double res, double userRes);