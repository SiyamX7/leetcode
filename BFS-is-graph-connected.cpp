#include <bits/stdc++.h>
using namespace std;      

bool isConnected(vector<vector<int>> &v){
	int n = v.size();
	vector<bool> visited(n,false);
	queue<int> q;

	q.push(0);
	visited[0] = true;

	while(!q.empty()){
		int current = q.front();
		q.pop();

		for(int val : v[current]){
			if(!visited[val]){
				visited[val] = true;
				q.push(val);
			}
		}
	}

	for(bool x : visited){
		if(!x) return false;
	}
	return true;
}             

int main() {
	vector<vector<int>> adj(6);
	adj[0] = {1,3};
	adj[1] = {0,2,3};
	adj[2] = {1,4};
	adj[3] = {0,1,4};
	adj[4] = {2,3};

	if(isConnected(adj)){
		cout << "graph is connected." << endl;
	} else {
		cout << "graph is not connected." << endl;
	}

	//to be connected, at least (n-1) edges are needed.
}