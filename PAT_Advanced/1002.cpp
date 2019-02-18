//
// Created by ycp on 19-2-5.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a[1001]={0};
    int m,n,t;
    float coe;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>t>>coe;
        a[t]=coe;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t>>coe;
        a[t]+=coe;
    }
    int result=0;
    for(int i=0;i<1001;i++){
        if(a[i]!=0) result++;
    }
    cout<<result;
    for(int i=1000;i>=0;i--){
        if(a[i]!=0.0)
            cout<<' '<<i<<' '<<fixed<<setprecision(1)<<a[i];
    }
    return 0;
}