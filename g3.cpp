//dfs implementation.
#include<bits/stdc++.h>
using namespace std;

//User defined snippets
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
const int N=1e5+2;

vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(auto child : g[vertex]){
        cout<<"parent"<<vertex<<",child"<<child<<endl;
        if(vis[child]) continue;
        dfs(child);
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;++i){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    
    return 0;
}