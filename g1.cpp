//Adjency matrix representation of graph.
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
const int N=1e3+10;
int graph[N][N];

int main(){
    int n,m;
    cin>>n>>m;
    rep(i,0,m){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    rep(i,0,m){
        rep(j,0,m){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}