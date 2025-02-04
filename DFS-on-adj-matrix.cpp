#include <bits/stdc++.h>
using namespace std;     
#define v vector      

void dfs(int node, v<v<int>>& graph, v<bool>& visited) {
	cout << node << " ";
	visited[node] = true;

	for(int i = 0; i < graph.size(); i++){
		if(graph[node][i] == 1 && !visited[i]){
			dfs(i, graph, visited);
		}
	}
}       

int main() {
	int n, m;
	cin >> n >> m;
	v<v<int>> adj(n+1, v<int>(n+1,0));
	v<bool> visited(n+1, false);

	for(int i = 0; i < m; ++i){
		int x, y;
		cin >> x >> y;
		adj[x][y] = adj[y][x] = 1;
	}

	dfs(1, adj, visited);
}