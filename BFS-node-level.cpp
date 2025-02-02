#include <bits/stdc++.h>
#include <vector>
using namespace std;     

int nodeLevel(int v, vector<int> tree[], int x) {
	if(x == 0) return 0;

	vector<int> visited(v, -1);
	queue<int> q;

	vector<int> level(v);

	visited[0] = 0;
	q.push(0);

	while(!q.empty()){
		int current = q.front();
		q.pop();

		for(auto ngbr : tree[current]){
			if(ngbr == x) return visited[current] + 1;

			if(visited[ngbr] == -1){
				visited[ngbr] = visited[current] + 1;
				q.push(ngbr);

			}
		}
	}
	return -1;
}             

int main() {
	vector<int> tree[6];
	tree[0] = {1,2};
	tree[1] = {0,3,4};
	tree[2] = {0,5};
	tree[3] = {1};
	tree[4] = {1};
	tree[5] = {2};

	cout << nodeLevel(6, tree, 3) << endl;
}


