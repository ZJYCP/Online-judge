//
// Created by ycp on 19-3-2.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

string alumnus[10010];
string guest[10010];

bool cmp(string id1,string id2){
    int birth1=0,birth2=0;
    for(int i=6;i<14;i++){
        birth1=birth1*10+id1[i];
        birth2=birth2*10+id2[i];
    }
    return birth1<birth2;
}
int main(){
    int N,M,count;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>alumnus[i];
    }
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>guest[i];
        for(int j=0;j<N;j++){
            if(guest[i]==alumnus[j]){
                count++;
            }
        }
    }
    if(count!=0){
        printf("%d\n",count);
        sort(alumnus,alumnus+N,cmp);
        cout<<alumnus[0];

    } else{
        sort(guest,guest+M,cmp);
        cout<<guest[0];
    }
}
