#include <bits/stdc++.h>
using namespace std;                   

int main() {
	vector <int> v = {-10,-1,-18,-19}; int target = -19;
	// vector <int> v = {5,5};	 int target = 10;

	vector <pair<int,int>> vp;

	for(int i = 0; i < v.size(); i++){
		vp.push_back({v[i], i});
	}

	sort(vp.begin(), vp.end());

	int left = 0, right = v.size() - 1;

	while(left < right){
		int sum = vp[left].first + vp[right].first;

		if(sum == target){
			cout << min(vp[left].second, vp[right].second);
			cout  << " " <<  max(vp[left].second, vp[right].second);
			break;
		} else if (sum < target){
			left++;
		} else {
			right--;
		}
	}
	// cout << endl;
	// for(auto val : vp) {
	// 	cout << val.first << " " << val.second << endl;
	// }
}