//
// Created by ycp on 19-3-2.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
bool isprime(int x){
    if(x<=1) return false;
    int sqr=(int)sqrt(1.0*x);
    for(int i=2;i<=sqr;i++){
        if(0==x%i) return false;

    }
    return true;
}
void findprime(int N){
    while(true){
        N++;
        if(isprime(N)){
            if(isprime(N-6)||isprime(N+6)){
                printf("%d",N);
                break;
            }
        }

    }
}
int main()
{
    int N,smaller,larger;

    scanf("%d",&N);
    smaller=N-6;
    larger=N+6;

    if(isprime(N)){
        if(isprime(smaller)){
            printf("Yes\n%d",smaller);

        }else if(isprime(larger)){
                printf("Yes\n%d",larger);

        }else
        {
            printf("No\n");
            findprime(N);
        }

    }
    else{
        printf("No\n");
        findprime(N);
    }

    return 0;
}
