#include <bits/stdc++.h>
#include <vector>
using namespace std;   

void dfs(int current, vector<vector<int>>& graph, vector<bool> visited){
	cout << current << " ";
	visited[current] = true;

	for(auto x : graph[current]){
		if(!visited[x]){
			dfs(x, graph, visited);
		}
	}
}                

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> graph(n+1);
	vector<bool> visited(n+1, false);

	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	dfs(4, graph, visited);
}