#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){

    int n; // number of vertices
    int m; // number of edges

    cout << "Enter thr number of vertices : " << endl;
    cin >> n;
    cout << "Enter the number of edges: " << endl;
    cin >> m;

    unordered_map<int, list<int>> adjList;
    cout << "Enter edges (u, v) : " << endl;
    // cout << "\nAdjacency List: "<< endl;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout << "Adjancency List : " << endl;
    for(auto i : adjList){
        cout << i.first << "->";

        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}