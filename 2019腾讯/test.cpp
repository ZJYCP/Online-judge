//
// Created by ycp on 19-4-5.
//

#include <iostream>

using namespace std;

int ca[110]={0};
int cb[110]={0};

//void saun(int x,int y){
//    int sum1=0,yushu=x;
//    while(yushu!=0){
//        y--;
//        sum1=yushu/ca[y];
//        if(sum1>cb[ca[y]])
//            cb[ca[y]]=sum1;
//        yushu=yushu%ca[y];
//    }
////    return sum1;
//}

int saun(int x,int y){
    int sum1=0,yushu=x;
    while(yushu!=0){
        y--;
        sum1=sum1+yushu/ca[y];
        yushu=yushu%ca[y];
    }
    return sum1;
}

int main(){
    int sum,maxsum=0;
    int m,n;

    cin>>m>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>ca[i];
    }
    for(int i=1;i<=m;i++){
        sum=saun(i,n);
        if(sum>maxsum)
            maxsum=sum;
    }
//    for (int j = 1; j < 110; ++j) {
//        maxsum+=cb[j];
//    }

    cout<<maxsum;
    return 0;
}

