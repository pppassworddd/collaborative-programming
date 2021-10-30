#include <stdio.h>
#include <iostream>

#include "../inc/func.h"

using namespace std;

int main(){
    double res=GenQuestion(HandleInputGrade());
	double userRes=HandleInputAnswer();
	int i;
	int num = HandleInputNum();
	for(i=0;i<num;i++)
	{
		Judge(res,userRes);
		HandleOutput();
	}
	return 0; 
}