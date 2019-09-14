#include <iostream>
#include <algorithm>
using namespace std;
int n, m, c1, c2;
int map[510][510], secure[510], dist[510], num[510], w[510];
bool S[510];
const int inf = 32767;
int main() {
    //信息输入，初始化
    cin>>n>>m>>c1>>c2;
    for(int i =0;i<n;i++){
        S[i]= false;
        cin>>secure[i];
    }
    fill(map[0], map[0] + 510 * 510, inf);
    fill(dist, dist + 510, inf);
    int start, end, distance;
    for(int i = 0; i < m; i++) {
        cin>>start>>end>>distance;
        map[start][end] = map[end][start] = distance;
    }

    dist[c1] = 0;
    w[c1] = secure[c1];
    num[c1] = 1;
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
                    num[j]=num[u];
                    w[j]=w[u]+secure[j];
                } else if(dist[u]+map[u][j]==dist[j]){
                    num[j]=num[u]+num[j];
                    if(w[u]+secure[j]>w[j])
                        w[j]=w[u]+secure[j];
                }
            }
        }



    }
    cout<<num[c2]<<' '<<w[c2];

    return 0;
}