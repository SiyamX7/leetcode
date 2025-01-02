#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;       

#define pb push_back

int main() {
	// vector<int> v = {-1,0,1,2,-1,-4};
	vector<int> v = {-2,0,1,1,2};
	sort(v.begin(), v.end());
	vector<vector<int>> res;

	for(int i = 0; i < v.size()-2; i++){
		if(v[i] > 0) break;
		if(i > 0 && v[i] == v[i-1]) continue;

		int left = i+1;
		int right = v.size()-1;

		while(left < right){
			int sum = v[i] + v[left] + v[right];
			if(sum > 0){
				right--;
			} 
			else if (sum < 0){
				left++;
			} 
			else {
				res.pb({v[i], v[left], v[right]});

				while(left < right && v[left] == v[left+1]) left++;
				while(left < right && v[right] == v[right-1]) right--;
				left++;
				right--;
			}
		}
	}

	for(auto val : res){
		for(auto x : val){ 
			cout << x << " ";
			}cout << endl;
	}

}