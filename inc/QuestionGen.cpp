#include"QuestionGen.h"

void QuestionGen :: GenBasePoly(int level){
    // 生成多项式字符串
};

void QuestionGen :: UpgradePoly(){
    // 为多项式字符串添加括号
};

string QuestionGen::getPoly(int type,int level){
    GenBasePoly(level);
    UpgradePoly();

    switch (type)
    {
    case 0:
        return basePoly;
        break;
    
    case 1:
        return upgradedPoly;
        break;
    }

    return 0;
};