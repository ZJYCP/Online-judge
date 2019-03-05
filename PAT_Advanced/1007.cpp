//
// Created by ycp on 19-3-3.
//

#include <iostream>

using namespace std;

int main(){
    int K,c1,c2;
    cin>>K;
    int a,table[K];
    bool flag= false;
    cin>>table[0];
    if(table[0]>=0) flag=true;
    for (int i = 1; i <K ; ++i) {
        cin>>a;
        if(a>=0) flag=true;
        table[i]=table[i-1]+a;
    }
    if(!flag){
        cout<<"0"<<' '<<table[0]<<' '<<table[K-1]-table[K-2];
        return 0;
    }
    int max=table[0];
    int left=table[0],right=table[0];
    for (int i = 0; i <K ; ++i) {
        if(0==i){
            for (int j = i; j <K; ++j) {
                if(table[j]>max){
                    max=table[j];
                    left=table[i];
                    right=table[j]-table[j-1];
                    c1=i;
                    c2=j;
                }
            }
        } else{
            for (int j = i; j <K; ++j) {
                if(table[j]-table[i-1]>max){
                    max=table[j]-table[i-1];
                    left=table[i]-table[i-1];
                    right=table[j]-table[j-1];
                    c1=i;
                    c2=j;
                }else if(table[j]-table[i-1]==max){
                    if(j+i<c1+c2){
                        max=table[j]-table[i-1];
                        left=table[i]-table[i-1];
                        right=table[j]-table[j-1];
                        c1=i;
                        c2=j;
                    }

                }
            }
        }

    }

        cout<<max<<' '<<left<<' '<<right;

    return 0;

}