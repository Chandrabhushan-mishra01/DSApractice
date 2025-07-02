#include <bits/stdc++.h>
using namespace std;

// representation of grpah
void f(int n, int m){

    // ==========================
    // 1. Undirected Unweighted Graph
    // ==========================

    // (a) Adjacency Matrix
    int adjUndir[n+1][n+1] = {0};
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjUndir[u][v] = 1;
        adjUndir[v][u] = 1;
    }

    // (b) Adjacency List
    vector<int> listUndir[n+1];
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        listUndir[u].push_back(v);
        listUndir[v].push_back(u);
    }

    // ==========================
    // 2. Directed Unweighted Graph
    // ==========================

    // (a) Adjacency Matrix
    int adjDir[n+1][n+1] = {0};
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjDir[u][v] = 1;
    }

    // (b) Adjacency List
    vector<int> listDir[n+1];
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        listDir[u].push_back(v);
    }

    // ==========================
    // 3. Undirected Weighted Graph
    // ==========================

    // (a) Adjacency Matrix
    int adjUndirW[n+1][n+1] = {0};
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adjUndirW[u][v] = w;
        adjUndirW[v][u] = w;
    }

    // (b) Adjacency List
    vector<pair<int, int>> listUndirW[n+1];
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        listUndirW[u].push_back({v, w});
        listUndirW[v].push_back({u, w});
    }

    // ==========================
    // 4. Directed Weighted Graph
    // ==========================

    // (a) Adjacency Matrix
    int adjDirW[n+1][n+1] = {0};
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adjDirW[u][v] = w;
    }

    // (b) Adjacency List
    vector<pair<int, int>> listDirW[n+1];
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        listDirW[u].push_back({v, w});
    }

}

int main() {
    int n; // n = number of vertices
    int m; // m = number of edges
    cin >> n >> m; 
    f();
    return 0;
}