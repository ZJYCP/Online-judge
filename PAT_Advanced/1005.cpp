//
// Created by ycp on 19-2-16.
//

#include <iostream>
using namespace std;

int main(){
    string s;
    int sum=0;
    string dic[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>s;

    for (int i=0;i<s.length();i++) {
        sum+=s[i] -'0';
    }
    string res=to_string(sum);

    cout<<dic[res[0]-'0'];
    for(int i=1;i<res.length();i++){
        cout<<' '<<dic[res[i]-'0'];
    }


    return 0;
}
