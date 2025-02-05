#include <bits/stdc++.h>
using namespace std;                   
#define v vector

void bfs(int node, v<v<int>> &graph, v <bool>& visited){
	queue<int> q;
	visited[node] = true;
	q.push(node);

	while(!q.empty()){
		int current = q.front();
		q.pop();
		cout << current << " ";

		for(int i = 1; i < graph.size(); i++){
			if(graph[node][i] == 1 && !visited[i]){
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	v<v<int>> graph(n+1, v<int>(n+1, 0));
	v<bool> visited(n+1, false);

	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		graph[x][y] = graph[y][x] = 1;
	}

	bfs(0, graph, visited);
}