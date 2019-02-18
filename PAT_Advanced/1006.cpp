//
// Created by ycp on 19-2-17.
//

#include <iostream>
using namespace std;

int main(){
    int number,h,m,s,time;
    int earlytemp=90000,latetemp=0;
    cin>>number;
    char c;
    string id,unlock,lock;
    while (number--){
        cin>>id>>h>>c>>m>>c>>s;
        time=h*3600+m*60+s;
        if(time<earlytemp){
            earlytemp=time;
            unlock=id;
        }
        cin>>h>>c>>m>>c>>s;
        time=h*3600+m*60+s;
        if(time>latetemp){
            latetemp=time;
            lock=id;
        }
    }
    cout<<unlock<<' '<<lock;
}