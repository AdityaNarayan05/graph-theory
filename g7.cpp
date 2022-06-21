//precomputation using dfs.
#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int> g[N];
/**
 * Given Query q<=10^5
 * in each query given V
 * Print Subtree Sum of V & numbersof even numbers of subTreee of V
*/

int subTreeSum[N],evenCnt[N];

void dfs(int vertex,int par=0){
    if(vertex%2==0) evenCnt[vertex]++;
    subTreeSum[vertex]+=vertex;
    for(auto child:g[vertex]){
        if(child==par) continue;
        dfs(child,vertex);
        subTreeSum[vertex]+=subTreeSum[child];
        evenCnt[vertex]+=evenCnt[child];
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    /**
     * int q;
     * cin>>q;
     * while(q--){
     * int v;
     * subTreeSum[v];
     * evenCnt[v];
     * }
     * 
     */
    for(int i=1;i<=n;++i){
        cout<<subTreeSum[i]<<"  "<<evenCnt[i]<<endl;
    }
    return 0;
}