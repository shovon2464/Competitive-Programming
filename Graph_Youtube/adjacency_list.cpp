#include<bits/stdc++.h>

using namespace std;

#define V 5

void addEdge(vector<int> graph[], int u, int v){
    graph[u].push_back(v);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    
    //Array of vectors, every vector represents adjacency list of a vertex
    vector<int> graph[V];

    addEdge(graph,0,1);
    addEdge(graph,0,4);
    addEdge(graph,1,1);
    addEdge(graph,1,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,3,4);
    addEdge(graph,3,2);

    cout<<"Adjacency List: "<<endl;
    for(int i=0;i<V;i++){
        cout<<i;
        for(int j=0;j<graph[i].size();j++){
            cout<<" ->"<<graph[i][j];
        }
        cout<<endl;
    }
}