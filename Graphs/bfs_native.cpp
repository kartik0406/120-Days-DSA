#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
          adj[u].push_back(v);
          adj[v].push_back(u);
}

void BFS(vector<int>adj[],int V){
	
	queue<int>q;
	bool visited[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	q.push(0);  
	visited[0]=true;
	while(!q.empty()){
		int node=q.front();
		q.pop();
	    cout<<node<<" ";
        for(int j=0;i<adj[node].size();j++){
        	if(visited[adj[node][j]]==0)
        	{	q.push(adj[node][j]);
                visited[adj[node][j]]=true;
        	}
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
    
    BFS(adj,V);
	return 0;
}