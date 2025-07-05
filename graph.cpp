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

vector<int> BFSOfGraph(int v, vector<int> adj[]) {
    vector<int> vis(v, 0); 
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

    void dfs(int node, vector<int>& vis, vector<int>& ans, vector<vector<int>>& adj) {
        vis[node] = 1;
        ans.push_back(node);  
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, vis, ans, adj);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();  
        vector<int> vis(V, 0); 
        vector<int> ans;
        dfs(0, vis, ans, adj);  
        return ans;
    }

int main() {
    int n; // n = number of vertices
    int m; // m = number of edges
    cin >> n >> m; 
    f();
    return 0;
}