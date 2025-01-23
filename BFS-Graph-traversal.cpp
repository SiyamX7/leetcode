#include <bits/stdc++.h>
#include <vector>
using namespace std;         

void bfs(int start, vector<vector<int>> graph){
	int n = graph.size();
	vector<bool> visited(n, false);
	queue<int> q;

	cout << "BFS traversal: " << endl;
	cout << start << " ";

	q.push(start);
	visited[start] = true;

	while(!q.empty()){
		int current = q.front();
		q.pop();

		for(auto val : graph[current]){
			if(!visited[val]){
				visited[val] = true;
				q.push(val);
				cout << val << " ";
			}
		}
	}
}          

int main() {
	int n, e;
	cout << "enter graph input: " << endl;
	cin >> n >> e;

	vector<vector<int>> graph(n);

	for(int i = 0; i < e; i++){
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	int start = 0;
	bfs(start, graph);
}