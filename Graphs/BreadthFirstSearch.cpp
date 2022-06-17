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
	 void bfs(){
	 	 vector<bool>vis(adj.size(),0);
         for(auto i:adj){
         	 if(!vis[i.first]){
         		queue<int>q;
         		q.push(i.first);
         		vis[i.first]=true;
         		while(!q.empty()){
         			int node=q.front();
         			q.pop();
         			cout<<node<<" ";
         			for(auto j:adj[node]){
         				if(!vis[j]){
         				vis[j]=true;
         				q.push(j);
         			  } 
         			}
         		}
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
     g.bfs();
	return 0;
}