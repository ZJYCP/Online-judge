//
// Created by ycp on 19-8-17.
//


#include <cstdio>
#include <stack>
#include <string>
#include <iostream>
using namespace std;

string s;

stack<int> num;
stack<string> letter;

int count=0;

int main(){
    char ch;
    int x;
    while (scanf("%c",&ch)==1){
        if(ch=='\n') break;

        if(count>0){
            string string1="";
            while (ch!=']'&&ch!='['){
                string1+=ch;
                scanf("%c",&ch);
            }
            letter.push(string1);
        }
        if(ch=='['){  //数字
            count++;
            scanf("%d",&x);
            getchar();
            num.push(x);
            letter.push("[");
        }
        if(ch==']'){
            count--;
            x=num.top();
            num.pop();
            string t="";
            while (!letter.empty()){
                string string2=letter.top();
                letter.pop();
                if (string2=="[") break;
                t=string2+t;
            }

            string _t=t;
            t="";
            for(int i=1;i<=x;i++){
                t=t+_t;
            }
            letter.push(t);
        }

        if(count<=0){
            while (!letter.empty()){
                if (letter.top()!="[") {
                    s+=letter.top();
                }
                letter.pop();
            }
        }
        if (ch!='['&&ch!=']') {
            s+=ch;
        }
    }
    cout<<s;
    while (!letter.empty()){
        cout<<letter.top();
        letter.pop();
    }
    printf("\n");

    return 0;
}