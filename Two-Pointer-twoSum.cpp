#include <bits/stdc++.h>
using namespace std;                   

int main() {
	vector <int> v = {3,4,5,6};
	int target = 7;

	vector <int> sol;
	int left = 0;
	int right = v.size() - 1;

	while(left < right){
		int sum = v[left] + v[right];

		if(sum == target){
			sol.push_back(left);
			sol.push_back(right);
			break; // for one pair

			/* If i want multiple pairs, then i need to move
			the left and right pointer too inside this
			left++;
			right--;
			*/
			
		} else if (sum < target){
			left++;
		} else {
			right--;
		}
	}

	for(auto val : sol) cout << val << " ";
}