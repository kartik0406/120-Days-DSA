#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
          adj[u].push_back(v);
          adj[v].push_back(u);
}

void printGraph(vector<int>adj[],int V){
	 for(int i=0;i<V;i++){
	 	cout<<"\nEdge from Vertex "<<i<<" to ";
	 	for(auto x:adj[i]){
	 		cout<<x<<",";
	 	}
	 }
}
bool bfscycle(int node,vector<int>adj[],vector<bool>&vis){
     vis[node]=true;
     queue<pair<int,int>>q;
     q.push({node,-1});
     while(!q.empty()){
        int ele=q.front().first;
        int par=q.front().second;
        for(auto x:adj[ele]){
            if(!vis[x]){
                vis[x]=true;
                q.push({x,ele});
            }
            else if(x!=par)
                return true;
        }
     }
     return false;
}
int main(){

    int V=7;
    vector<int>adj[V+1];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);
    
    printGraph(adj,V);
    vector<bool>vis(V,0);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(bfscycle(i,adj,vis)){
                cout<<"\nCycle Detected in the Graph";
                break;
            }
        }
    }

	return 0;
}