//
// Created by ycp on 19-3-9.
//

#include <iostream>

int combine(int n,int m){
    if(m==1)
        return n;
    else if(m==n)
        return 1;
    else
        return combine(n-1,m)+combine(n-1,m-1);
}
using namespace std;
int main(){
    int n,s;
    long long c1=1,c2=1,res;
    cin>>n>>s;
//    for(int i=n;i>s;i--){
//        c1=c1*i;
//    }
//    for(int i=n-s;i>0;i--){
//        c2=c2*i;
//    };
    res=combine(n,s);
//    res=c1/c2;
    res=res*(n-s)*2;//wrong   pow(2,n-s)
    if(n==s) res=1;
    res=res%1000000007;
    cout<<res;
    return 0;
}