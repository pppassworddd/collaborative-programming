#include "func.h"

int HandleInputGrade(String a) {
    cout<<"请输入你的年级"<<endl;
    cin>>a;
    if(a[0]=="一"||a[0]=="二"){
    	return 1;
	}
	else if(a[1]=="三"||a[2]=="四"){
    	return 3;
	}
	else if(a[1]=="五"||a[2]=="六"){
    	return 5;
	}
}
int HandleInputNum(int num){
	cout<<"请输入题目数"<<endl;
	cin >> num;
	return num;
}
double HandleInputAnswer(int num){
	double ans;
	cin>>ans;
	return ans;
}
void HandleOutput(){
		if(tofnum==0){
		cout<<"结束！全部正确，太棒了！"<<endl;
	}
	else{
		cout<<"结束！错了 "<<tofnum<<" 题哦"<<endl;
	}
}
bool Judge(double res, double userRes) {
    if（res==userRes）
    {
        return 1;
    }
    else
    {
        return 0;
    }
}	



double Level_56(){
    double num1;
	int leng;
	int i=0;
	num1=quesdata.num[0];
	while(i=0;i+2<quesdata.Strnum;i++)
	switch(quesdata.num[i+1]){
		case 1: num1+=quesdata.num[i+2];break;
		case 2: num1-=quesdata.num[i+2];break;
		case 3: num1*=quesdata.num[i+2];break;
		case 4: num1/=quesdata.num[i+2];break;	
	}
	return num1;
}



