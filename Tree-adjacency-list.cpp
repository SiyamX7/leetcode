#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

#define ll long long

int main() {
	ll n;
	cin >> n;
	vector<vector<ll>> tree(n+1);

	for(ll i = 0; i < n-1; i++){
		ll x, y;
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	for(ll i = 1; i <= n; i++){
		cout << "for adj " << i << " :" ;
		for(auto val : tree[i]){
			cout << val << " ";
		}
		cout << endl;
	}
}