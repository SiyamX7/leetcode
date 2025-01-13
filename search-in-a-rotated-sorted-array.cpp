#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

int search(vector<int> &v, int target){
	int left = 0;
	int right = v.size() - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if(v[mid] == target){
			return mid;
		}
		else if(v[left] > v[right] && target < v[mid]){
			left = mid + 1;
		} else if (v[left] > v[right] && target > v[mid]){
			right = mid - 1;
		}
		else if(v[left] < v[right] && target < v[mid]){
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return -1;
}

int main() {
	vector<int> v = {4,5,6,7,0,1,2};
	vector<int> vv = {3,4,5,6,1,2};
	cout<< "index: " << search(v,0) << endl;
	cout<< "index: " << search(vv,1) << endl;
}


		// } else if (target > v[mid] && v[mid-1] > v[mid]){
		// 	right = mid - 1;
		// } else if (target < v[mid] && v[mid] > v[mid + 1]) {
		// 	left = mid + 1;
		// } else 