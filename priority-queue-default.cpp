#include <bits/stdc++.h>
#include <queue>
using namespace std;                   

int main() {
	priority_queue<int> pq;
	for(int i = 1; i < 300; i+=5){
		pq.push(i);
	}
	while(!pq.empty()){
		cout << pq.top() << " ";
		pq.pop();
	}
}