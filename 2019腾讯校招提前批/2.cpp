//
// Created by ycp on 19-3-9.
//

#include <iostream>

using namespace std;

int main(){
    int n,left,right,count,res;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>left>>right;
        count=right-left+1;
        if(0==count%2){
            if(0==left%2){
                res=-1*count/2;
            } else{
                res=count/2;
            }
        }else{
            if(0==left%2){
                res=right-count/2;
            } else{
                res=count/2-right;
            }
        }
        cout<<res<<endl;
    }
}