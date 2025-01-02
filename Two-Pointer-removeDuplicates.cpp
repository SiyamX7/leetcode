/* This problem is called remove duplicates or amount of 
   unique element in the vector. 
   Constraints are you can't use any extra space.
   You can't just traverse through the array and return the
   count. You have to update the array. */

#include <bits/stdc++.h>
using namespace std;                   

int main() {
	vector <int> v = {0,0,1,1,1,2,2,3,3,4};

	int left = 1;

	for(int right = 1; right < v.size(); right++){
		if(v[right] != v[right - 1]){
			v[left] = v[right];
			left++;
		}
	}

	cout << left << endl;
	for(auto val : v) cout << val << " ";
}