/* find the triplets which adds up to 0;
v[i] + v[j] + v[k] == 0;
i != j != k
*/

#include <algorithm>
#include <bits/stdc++.h>

#include <vector>
#define pb push_back
using namespace std;                   

int main() {
	vector<int> v = {-2,0,1,1,2};
	sort(v.begin(), v.end());
	set<vector<int>> s;

	for(int i = 0; i < v.size(); i++){
		int left = i+1;
		int right = v.size()-1;

		while (left < right) {
			int sum = v[i] + v[left] + v[right];

			if(sum < 0){
				left++;
			} 
			else if (sum > 0){
				right--;
			} else {
				s.insert({v[i], v[left], v[right]});
				left++;
				right--;
			}
		}
	}

	vector<vector<int>> res(s.begin(),s.end());

	for(auto val : res){
		for(auto x : val){
			cout << x << " ";
		}
		cout << endl;
	}
}