#include <bits/stdc++.h>
#define v vector
#define pb push_back
using namespace std;       

void dfs(int start, v<v<int>>& graph, v<bool>&visited){
	for(int x : graph[start]){
		if(!visited[x]){
			visited[x] = true;
			dfs(x, graph, visited);
		}
	}
}            

int main() {
	int n, m;
	cin >> n >> m;
	v<v<int>> graph(n+1);
	v<bool> visited(n+1, false);

	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		graph[x].pb(y);
		graph[y].pb(x);
	}

	int count = 0; 
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dfs(i, graph, visited);
			count++;
		}
	}

	cout << count << endl;

}