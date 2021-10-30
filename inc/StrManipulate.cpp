#include"StrManipulate.h"
#include<iostream>
#include<numeric>
#include <vector>
using namespace std;

double StrManipulate :: calculate(string s) {
        int n=s.size();
        char presign='+';
        double num=0;
        double point = 0.01;
        bool flag = false;
        vector<double> stk;
        int i=0;
        while(i<n){
            if(isdigit(s[i])) num=num*10+s[i]-'0';
            else if(s[i]=='('){//遇到左括号递归
                int j=i;
                int cnt=0;
                for(;i<s.size();i++){
                    if(s[i]=='(') cnt++;
                    if(s[i]==')') cnt--;
                    if(cnt==0) break;
                }
                num=calculate(s.substr(j+1,i-j-1));
            }
            if(s[i] == '.'|| flag) {
                flag = true;
                point *= 10;
            }       
            if((!isdigit(s[i])||i==n-1)&&s[i]!='.'){
                if(flag)num /= point;
                flag = false;
                point = 0.01;
                if(presign=='+') stk.push_back(num);
                else if(presign=='-') stk.push_back(-num);
                else if(presign=='*') stk.back()*=num;
                else if(presign=='/') stk.back()/=num;
                presign=s[i];
                num=0;
            }         
            i++;
        }
        return accumulate(stk.begin(),stk.end(),0.0);
    }