#ifndef _CALCULATE_H_
#define _CALCULATE_H_
#include<iostream>
using namespace std;

typedef struct 
{
    /* data */
    double num[10];  //代表 数据
    int Strnum;  // 总的数字和运算符数量
} quesdata;

double GenQuestion(int level);

int Level_12(quesdata quesdata);

int Level_34(quesdata quesdata);

double Level_56(quesdata quesdata);

#endif