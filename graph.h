#ifndef GRAPH_H
#define GRAPH_H 0
#include <bits/stdc++.h>
using namespace std;
// considering vertex from 0 to n-1
class Graph{

    public:
        int n;
        bool directed;
        list <int>  *adj;
        int **adj_matrix;
        Graph(int n, bool directed);
        void draw();
        void addEdge(int u, int v);
        int size(){ return n ;}
};


Graph::Graph(int n, bool directed){
    this->n = n;
    this->directed = directed;
    this->adj = new list<int> [n];
    this->adj_matrix = new int* [n];
    for(int i = 0; i < n; i++) adj_matrix[i] = new int [n];
}

void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
    this->adj_matrix[u][v] = 1;
    if(!directed) {
        adj[v].push_back(u);
        this->adj_matrix[v][u] = 1;
    }

}

void Graph :: draw(){

    cout<<"adjacency list representation : "<<endl;
    for(int i = 0; i < this->n ; i++){
        cout<<i<<" : ";
        for(auto it = this->adj[i].begin(); it != this->adj[i].end(); it++){
            cout<<*it<< " ";
        }
        cout<<endl;
    }
    cout<<"adjacency matrix representation : "<<endl;
    for(int i = 0; i < this->n; i++){
        for(int j = 0 ; j < this->n; j++){
            cout<<this->adj_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}


#endif