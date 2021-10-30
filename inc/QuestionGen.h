#ifndef _QUESTIONGEN_H_
#define _QUESTIONGEN_H_
#include<iostream>
using namespace std;

class QuestionGen
{
private:

    string basePoly;
    string upgradedPoly;

    void GenBasePoly(int level);// 生成合法字符串，根据等级，不带括号
    void UpgradePoly();// 对基础字符串进行添加括号操作
    /* data */
public:
    
    string getPoly(int type,int level);// 获取字符串,type == 0 获取基础字符串，type == 1 获取带括号串
};


#endif