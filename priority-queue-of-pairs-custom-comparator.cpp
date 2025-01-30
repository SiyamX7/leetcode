#include <bits/stdc++.h>
using namespace std;                   

struct Compare{
	bool operator()(pair<int,int>a, pair<int,int>b){
		return a < b;
	}
};

int main() {
	priority_queue<pair<int,int>,vector<pair<int,int>>, Compare> pq;
    pq.push({1, 50});
    pq.push({2, 30});
    pq.push({3, 40});
    pq.push({4, 10});

    while (!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
}