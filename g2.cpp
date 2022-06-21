//adjency list representation of graph
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

vi graph[N];//it is used for unweighted graph.
vii graph2[N];

int main(){
    int n,m;
    cin>>n>>m;
    //simple represention of unweighted graph.
    rep(i,0,m){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    rep(i,0,m){
        rep(j,0,m){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    //representation of weighted graph in adjacency list is done using vector of pair one point to address another to weight;
    rep(i,0,m){
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
return 0;
}