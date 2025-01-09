#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

int main() {
	vector<vector<int>> v = {
							{1,2,4,5},
							{6,7,8,9},
							{10,11,12,13},
							{14,15,16,17},
							{18,19,20,21}
							};

	int target = 11;
	int up = 0;
	int down = v.size()-1;
	int n = v[0].size()-1;

	int row = -1;

	while(up <= down){
		int mid = (up + down) / 2;
		if(target >= v[mid][0] && target <= v[mid][n]){
			row = mid;
			break;
		}
		else if(target < v[mid][0]){
			down = mid - 1;
		}
		else {
			up = mid + 1;
		}
	}

	cout << (row == -1 ? "row not found\n" : "row is " + to_string(row) + "\n" );
	if (row == -1){
		return 0;
	} else {
		int left = 0;
		int right = v[0].size()-1;

		while(left <= right){
			int m = (left+right)/2;

			if(v[row][m]==target){
				cout << "found" << endl;
				return 0;
			} else if (v[row][m] < target){
				left = m + 1;
			} else {
				right = m - 1;
			}
		}
		cout << "item not found." << endl;
	}
}