#include <bits/stdc++.h>
using namespace std;          

int bins(vector<int> v, int left , int right, int target){
	while(left <= right){
		int mid = left + (right - left) / 2;

		if(v[mid] == target){
			return mid;
		}

		else if(v[mid] < target){
			left = mid + 1;
		} 

		else {
			right = mid - 1;
		}
	}
	return -1;
}

int findMinIndex(const vector<int> &v){
	if(v.size() == 2) return min(v[0], v[1]);

	int left = 0;
	int right = v.size() - 1;


	//amra chai left == right korte. tai left < right. not left <= right
	while(left < right){
		int mid = left + (right - left) / 2;

		if(v[mid] > v[right]){
			left = mid + 1;
		} 
		else {
			right = mid;
		}
	}

	return right;
}      

int search(const vector<int> &v, int target){
	int index = -1;

	if(v[0] < v[v.size() - 1]){

		index = bins(v, 0, v.size()-1, target);

	} else {

		int min = findMinIndex(v);
		if(target == v[min]) return min;
		if(target >= v[0] && target <= v[min-1]){
			index = bins(v, 0, min-1, target);
		} else {
			index = bins(v, min, v.size() - 1, target);
		}

	}

	return index;
}   

int main() {
	vector<int> v = {6,7,8,9,10,11,0,1,2,3,4,5};
	cout << search(v, 4);
}