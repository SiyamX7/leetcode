#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

#define  ll long long

bool bin(vector<vector<int>>&v,int row, int target){
	ll left = 0;
	ll right= v[0].size()-1;

	while(left <= right){
		ll mid = (left + right) / 2;
		if(v[row][mid] == target){
			return true;
		} else if (v[row][mid] < target) {
			left = mid+1;
		} else {
			right = mid-1;
		}
	}
	return false;
}

int main() {
	vector<vector<int>> v = {{1, 2, 3, 4},
							 {5, 6, 7, 8},
							{10,11,12,13},
							{14,20,30,40}};
							// cout << v.size()-1 << endl;

	int target = 40;
	ll left = 0;
	ll right = v.size()-1;
	// cout << left << " " << right << endl;

	while(right - left != 1){
		ll mid = (left+right)/2;

		if(v[mid][0] == target){
			cout << "target found" << endl;
		}

		else if (v[mid][0] < target ){
			left = mid;
		} else if(v[mid][0] > target){
			right = mid;
		}
	}

	bool x;
	if(v[left][0] <= target && v[left][v[0].size()-1] >= target){
		x = bin(v, left, target);
	} else {
		x = bin(v, right, target);
	}
	

	if(x == true){
		cout << "target found" << endl;
	} else {
		cout << "target not found" << endl;
	}
}