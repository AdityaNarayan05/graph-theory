//Cycle in a Graph
#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int> g[N];
bool vis[N];

bool dfs(int vertex,int parent){
    vis[vertex]=true;
    bool isLoopExist=false;

    for(auto child:g[vertex]){
        if(vis[child]&&child==parent) continue;
        if(vis[child]) return true;

        isLoopExist |=dfs(child,vertex);
    }
    return isLoopExist;
}
int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;++i){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bool isLoopExist=false;
    for(int i=1;i<=n;++i){
        if(vis[i]) continue;
        if(dfs(i,0)){
            isLoopExist=true;
            break;
        }
    }
    cout<<isLoopExist<<endl;
    return 0;
}