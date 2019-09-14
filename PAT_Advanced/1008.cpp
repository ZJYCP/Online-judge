//
// Created by ycp on 19-3-5.
//

#include <iostream>

int main(){
    int N;
    int floor,now=0;
    int time=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&floor);
        time=time+(floor-now>0?6:floor-now<0?4:0)*abs(floor-now)+5;
        now=floor;
    }

    printf("%d",time);
    return 0;
}

