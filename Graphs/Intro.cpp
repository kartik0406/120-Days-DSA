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
	return 0;
}