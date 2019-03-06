//
// Created by ycp on 19-3-6.
//

#include <iostream>

int main(){
    float table[1010]={0};
    float result[2010]={0};
    int exp,K;
    float coe;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        scanf("%d%f",&exp,&coe);
        table[exp]=coe;
    }
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        scanf("%d%f",&exp,&coe);
        for (int j = 0; j < 1001; ++j) {
            result[exp+j]+=table[j]*coe;
        }
    }
    int count=0;
    for (int k = 0; k < 2001; ++k) {
        if(result[k]!=0) count++;
    }
    printf("%d ",count);
    for (int k = 2000; k >=0; --k) {
        if(result[k]!=0) {
            if(count!=1){
                printf("%d %.1f ",k,result[k]);
                count--;
            } else{
                printf("%d %.1f",k,result[k]);
            }

        }
    }

}