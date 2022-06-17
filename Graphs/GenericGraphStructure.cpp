#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{

public:
      unordered_map<T,list<T>>adj;

      void addEdge(T u, T v, bool isDirected){
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
                   cout<<j<<", ";
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
   Graph<int>g;
   for(int i=0;i<m;i++){
       int u,v;
       cin>>u>>v;
       g.addEdge(u,v,0);
   }
   g.printGraph();


}