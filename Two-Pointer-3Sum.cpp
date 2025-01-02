#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;     

// vector<vector<int>> threeSum(vector<int>& v) {
       
// } 

bool bin(vector<int>&v, int left , int right, int n){
	while(left <= right){
		int mid = (left+right)/2;
		if(n == v[mid]){
			return true;
		} else if (v[mid] < n){
			left = mid + 1;
		} else {
			right = mid -1;
		}
	}
	return false;
}             

int main() {
	// vector<int> v = {-1,0,1,2,-1,-4};
	vector<int> v = {0,1,1};
	// vector<vector<int>> res = threeSum(v);
	sort(v.begin(), v.end());
	// for(auto val : v) cout << val << " ";

	int left = 0;
	int right = v.size()-1;
	vector<vector<int>> res;

	while(left < right){
		int sum = v[left] + v[right];
		if(sum < 0){
			bool flag = bin(v, left+1, right-1, -sum);
			if(flag){
				res.push_back({v[left], v[right],-sum});
				// while(v[right]==v[right-1]) right--;
			}
			left++;
		} else if(sum > 0) {
			bool flag = bin(v, left+1, right-1, -sum);
			if(flag){res.push_back({v[left], v[right],-sum});}
			right--;
		} else {
			bool flag = bin(v, left+1, right-1, -sum);
			if(flag){res.push_back({v[left], v[right],-sum});}
						
		}
	}
	cout << endl;
	for(auto &val : res){
		cout << val[0] << " " << val[1] << " " << val[2] << endl;
	}
}