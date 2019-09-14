//
// Created by ycp on 19-3-9.
//

#include <iostream>
using namespace std;
int m,n;
int table[2010]={0};
int shot[1000010]={0};

void table_init(){
    for(int i=0;i<2010;i++){
        table[i]=0;
    }
}
bool judge(){
    for(int k=1;k<=m;k++){
        if(table[k]!=1) return false;
    }
    return true;
}
int main(){

    int count=1000010;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>shot[i];
    }


    for(int i=0;i<n-m;i++){
        table_init();
        for(int j=i;j<n;j++){
            if(shot[i]==0){
                i=j+1;
                break;
            }
            table[shot[j]]=1;
            if(judge()== true){
                if(j-i<count){
                    count=j-i+1;
                    break;
                }
            }
        }
    }
    if(count==1000010) cout<<-1;
    else cout<<count;
    return 0;

}