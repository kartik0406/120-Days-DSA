#include<bits/stdc++.h>
using namespace std;

class Graph{

public:
	 unordered_map<int,list<int>>adj;
	 void addEdge(int u, int v, bool isDirected){
           adj[u].push_back(v);
           if(!isDirected)
           	 adj[v].push_back(u);
	 }
	 void printGraph(){
	 	for(auto i:adj){
	 		cout<<i.first<<"-->";
	 		for(auto j:i.second){
	 			cout<<j<<",";
	 		}
	 		cout<<endl;
	 	} 
	 }
	 void dfs(int node,vector<bool>&vis){
	 	  cout<<node<<" ";
	 	  vis[node]=true;
	 	  for(auto i:adj[node]){
	 	  	if(!vis[i]){
                  this->dfs(i,vis);
	 	    }
	 	}
	 }
};
int main(){

     int n,m;
     cin>>n>>m;
     Graph g;
     for(int i=0;i<m;i++){
     	int u,v;
     	cin>>u>>v;
     	g.addEdge(u,v,0);
     }
     g.printGraph();
     cout<<endl;
     vector<bool>vis(n,0);
     for(int i=0;i<n;i++){
        if(!vis[i]){
        	g.dfs(i,vis);
        }
     }

	return 0;
}