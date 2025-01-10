#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;                 

int main() {
	ll n;
	cin >> n;
	vector<ll> v(n), ps(n);

	for(ll i = 0; i < n; i++){
		cin >> v[i];
		if(i == 0){
			ps[i] = v[i];
		} else {
			ps[i] = ps[i-1] + v[i];
		}
	}

	// for(int i = 0; i < n; i++){
	// 	cout << v[i] << " " << ps[i] << endl;
	// }

	ll t;
	cin >> t;
	while(t--) {
		ll target;
		cin >> target;
		ll left = 0;
		ll right = n-1;

		while(left <= right){
			ll mid = (left+right)/2;
			if(ps[mid] >= target && (mid == 0 || ps[mid - 1] < target)){
				cout << mid + 1 << endl;
				break;;;
			} else if (target > ps[mid]){
				left = mid + 1 ;
			} else {
				right = mid - 1;
			}
		}
	}
}