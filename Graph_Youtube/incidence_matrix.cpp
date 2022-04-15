#include<bits/stdc++.h>

using namespace std;

#define V 5

#define E 8

void addEdge(int graph[][E], int u, int v, int e){
    graph[u][e] = 1;
    if(u!=v){
        graph[v][e] = -1;
    } 
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
#endif

    //2d array of V*E
    int graph[V][E]  = {};

    //graph, start,end,edge
    addEdge(graph,0,1,0);
    addEdge(graph,0,4,1);
    addEdge(graph,1,4,2);
    addEdge(graph,1,3,3);
    addEdge(graph,3,4,4);
    addEdge(graph,1,1,5);
    addEdge(graph,1,2,6);
    addEdge(graph,3,2,7);

    for(int i=0;i<V;i++){
        for(int j=0;j<E;j++){
            cout<<graph[i][j]<< " ";
        }
        cout<<endl;
    }


    return 0;
}