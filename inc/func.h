#include <stdio.h>

#define plus 1
#define minus 2
#define div 3
#define multi 4

int HandleInputGrade();  // 返回年级

int HandleInputNum();  // 输入题目数量

double HandleInputAnswer();  // 用户输入答案

void HandleOutput();

double GenQuestion(int level);

int Level_12();

int Level_34();

double Level_56();

bool Judge(double res, double userRes);