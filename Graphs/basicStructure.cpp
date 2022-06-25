#include<bits/stdc++.h>
using namespace std;

class Graph{

public:
      unordered_map<int,list<int>>adj;

      void addEdge(int u, int v, bool isDirected){
      	//isDirected=0 --> Undirected
      	//isDirected=1 --> Directed
          adj[u].push_back(v);
          if(!isDirected)
          	adj[v].push_back(u);
      }      
      void printGraph(){
           for(auto i:adj){
           	cout<<i.first<<"-->";
           	for(auto j:i.second){
                   cout<<j<<", ";;
           	  }
           	  cout<<endl;
           }
      }
};
int main(){

   int n,m;
   cout<<"Enter the number of nodes in the graph"<<endl;
   cin>>n;
   cout<<"Enter the number of edges in the graph"<<endl;
   cin>>m;
   Graph g;
   for(int i=0;i<m;i++){
       int u,v;
       cin>>u>>v;
       g.addEdge(u,v,0);
   }
   g.printGraph();


}

// Input:
// 5 6
// 0 1
// 1 2
// 2 3
// 3 1 
// 3 4
// 0 4

// Output:
// Enter the number of nodes in the graph
// Enter the number of edges in the graph
// 4-->3, 0, 
// 3-->2, 1, 4, 
// 2-->1, 3, 
// 0-->1, 4, 
// 1-->0, 2, 3, 
