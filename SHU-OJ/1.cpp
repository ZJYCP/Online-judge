#include <iostream>
#include <algorithm>
using namespace std;
int n, m, c1, c2;
int map[10010][10010], dist[100010],  w[10010],retturn[100010];
bool S[10010];
const int inf = 32767;
int main() {
    //信息输入，初始化
    cin>>n>>m>>c1>>c2;
    for(int i =0;i<n;i++){
        S[i]= false;
    }
    fill(map[0], map[0] + 10010 * 10010, inf);
    fill(dist, dist + 100010, inf);
    int start, end, distance;
    for(int i = 0; i < m; i++) {
        cin>>start>>end>>distance;
        map[start][end]  = distance;
    }

    dist[c1] = 0;

    S[c1]=true;

    for(int i=2;i<=n;i++){
        int mindist=inf;
        int u=c1;
        for(int j=1;j<=n;++j){         //寻找最短的点
            if(!S[j]&&dist[j]<mindist){
                u=j;
                mindist=dist[j];
            }
        }
        S[u]=true;
        for(int j=1;j<=n;j++){                 //更新dis
            if(!S[j]&&map[u][j]<inf){
                if(dist[u]+map[u][j]<dist[j]){
                    dist[j]=dist[u]+map[u][j];

                } else if(dist[u]+map[u][j]==dist[j]){
                }
            }
        }



    }
    S[c2]=true;
    for(int i =0;i<n;i++){
        S[i]= false;
    }
    retturn[c2] = 0;
    for(int i=2;i<=n;i++){
        int mindist=inf;
        int u=c1;
        for(int j=1;j<=n;++j){         //寻找最短的点
            if(!S[j]&&retturn[j]<mindist){
                u=j;
                mindist=retturn[j];
            }
        }
        S[u]=true;
        for(int j=1;j<=n;j++){                 //更新dis
            if(!S[j]&&map[u][j]<inf){
                if(retturn[u]+map[u][j]<retturn[j]){
                    retturn[j]=retturn[u]+map[u][j];

                } else if(retturn[u]+map[u][j]==retturn[j]){
                }
            }
        }



    }

    cout<<dist[c2]+retturn[c1];

    return 0;
}