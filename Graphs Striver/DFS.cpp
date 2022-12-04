#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void DFS(int node,vector<int>adj[],vector<int>&ls,vector<int>&vis){

vis[node]=1;
ls.push_back(node);
for(auto it: adj[node]){
    if(!vis[it]){
        DFS(it,adj,ls,vis);
            }
}
return;

}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    vector<int>adj[n];// writing this type should be avoided.
    for(int i=0;i<m;i++){
        int u, v;
        // Implemntation using Adjacency list.

        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //printGraph(adj,n);
    vector<int>StoreBfs;
   vector<int>StoreDfs;
    
   
    cout<<"------DFS-------------"<<endl;

    vector<int>Vis(n,0);
    DFS(0,adj,StoreDfs,Vis);
    int y=StoreDfs.size();
    for(int i=0;i<y;i++){
        cout<<StoreDfs[i]<<endl;
    }
    return 0;
}

