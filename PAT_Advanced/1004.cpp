//
// Created by ycp on 19-2-15.
//

#include <iostream>
#include <vector>
#define N 110
using namespace std;

int n,m;
vector<int> vec[N];
int number[N]={0};
int max_depth=0;
void dfs(int index,int depth){

    //更新
    if(vec[index].size()==0){
        number[depth]++;
    }

    //递归向下搜索
    for(int i=0;i<vec[index].size();++i){
        int child_index=vec[index][i];
        dfs(child_index,depth+1);
    }

    //更新最大深度
    if(depth>max_depth){
        max_depth=depth;
    }
}
int main(){
    cin>>n>>m;
    while (m--){
        int id,k;
        cin>>id>>k;
        while (k--){
            int a;
            cin>>a;
            vec[id].push_back(a);
        }
    }

    dfs(1,0);


    for(int i=0;i<=max_depth;++i){
        if(i){
           cout<<' ';
        }
        cout<<number[i];

    }

    return 0;
}
