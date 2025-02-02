#include <bits/stdc++.h>
using namespace std;     

string validBFS(vector<vector<int>> &tree, vector<int> &path){
	vector<int> comp;
	vector<bool> visited(tree.size(), false);
	queue <int> q;

	visited[1] = true;
	q.push(1);

	while(!q.empty()){
		int current = q.front();
		comp.push_back(current);
		q.pop();

		for(auto ngbr : tree[current]){
			if(!visited[ngbr]){
				visited[ngbr] = true;
				q.push(ngbr);
			}
		}
	}

	if(comp == path) return "YES";
	return "NO";
}              

int main() {
	int n;
	cin >> n;
	int e = n - 1;
	vector <vector<int>> tree(n+1);
	for(int i = 0; i < e; i++){
		int x, y;
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	vector<int> path(n);
	for(int i = 0; i < n; i++){
		cin >> path[i];
	}
	cout << validBFS(tree, path) << endl;
}