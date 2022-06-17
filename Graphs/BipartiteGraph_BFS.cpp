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
bool isBipartite(int node,vector<int>adj[],vector<bool>&vis,vector<int>&colour){
           queue<int>q;
           q.push(node);
           vis[node]=true;
           colour[node]=0;
           while(!q.empty()){
             int ele=q.front();
             q.pop();
             for(auto x:adj[ele]){
                 if(!vis[x]){
                    q.push(x);
                    vis[x]=true;
                    if(colour[ele]==0)
                        colour[x]=1;
                    else
                        colour[x]=0;
                    
                 }
                 else if(colour[x]==colour[ele]){
                    return false;
                 }
             }
         }
     return true;
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
    
    // printGraph(adj,V);
    vector<bool>vis(V,0);
    vector<int>colour(V,-1);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            //cout<<isBipartite(i,adj,vis,colour);
            if(isBipartite(i,adj,vis,colour)){
                cout<<"\nIt is a Bipartite graph";
            }
            break;
            
        }
    }


	return 0;
}