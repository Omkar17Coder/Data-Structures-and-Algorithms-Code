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
bool BFS(int V,vector<int>adj[],int startNode,int endNode){
      vector<int>vis(V,0);
      queue<int>q;
      vis[startNode]=1;
      q.push(startNode);
     /// vector<int >bfs;
      while(!q.empty()){
        int node=q.front();
        q.pop();
       // bfs.push_back(node);
        for(auto it:adj[node]){
            if(it==endNode){
                return true;
            }
            if(!vis[it]){
                q.push(it);
                vis[it]=1;

            }
        }
      }
      return false;
}
void printGraph(vector<int >adj[],int n){
    for(int i=0;i<n;i++){
        cout<<i<<":-> ";
        for(auto it: adj[i]){
            cout<<it<<" ->";
        }
    }
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
    if(BFS(n,adj,2,6)){
        cout<<"There exists Path between Nodes"<<endl;

    }
    // int x=StoreBfs.size();
    // cout<<"----BFS--------"<<endl;
    // for(int i=0;i<x;i++){
    //     cout<<StoreBfs[i]<<endl;

    // }
    cout<<"------DFS-------------"<<endl;

    vector<int>Vis(n,0);
    DFS(0,adj,StoreDfs,Vis);
    int y=StoreDfs.size();
    for(int i=0;i<y;i++){
        cout<<StoreDfs[i]<<endl;
    }
    return 0;
}