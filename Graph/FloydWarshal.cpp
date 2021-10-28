// Floyd Warshal algorithm implemented in cpp

#include<bits/stdc++.h>
#define inf 1<<29
using namespace std;
const int MAX = 1003;

int n, e, cost[MAX][MAX];
void floyd_warshall(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
            }
        }
    }
}
int main()
{
    cin>>n>>e;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) cost[i][j]=0;
            else cost[i][j]=inf;
        }
    }
    for(int i=0;i<e;i++){
        int u, v, w;
        cin>>u>>v>>w;
        cost[u][v] = w;
        cost[v][u] = w;

    }
    floyd_warshall();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
