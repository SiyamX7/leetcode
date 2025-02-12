#include <bits/stdc++.h>
#include <string>
#define v vector
#define pb push_back

#define vvi vector<vector<int>>
#define vb vector<bool>
using namespace std;    

void dfs(v<v<int>>& graph, v<bool> &visited, int node){
	for(int x : graph[node]){
		if(!visited[x]){
			visited[x] = true;
			dfs(graph, visited, x);
		}
	}
}   

string DFS(vvi &graph, vb &visited, int node, int b){
	if(node == b){
		return "yes";
	}

	for(int x : graph[node]){
		if(!visited[x]){
			visited[x] = true;
			string result = DFS(graph, visited, x, b);
			if(result == "yes") return "yes";
		}
	}
	return "no";
}            

int main() {
	int n, m;
	int a, b;
	cin >> n >> m >> a >> b;
	
	v<v<int>> graph(n+1);
	v<bool> visited(n+1, false);

	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		graph[x].pb(y);
		graph[y].pb(x);
	}

	visited[a] = true;
	// dfs(graph, visited, a);
	// if(visited[b]) {
	// 	cout << "yes" << endl;
	// } else {
	// 	cout << "no" << endl;
	// }
	cout << DFS(graph, visited, a, b) << endl;
}