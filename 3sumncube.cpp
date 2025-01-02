#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

int main() {
	vector<int> v = {-2,0,1,1,2};
	vector<vector<int>> res;
	int n = v.size();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			for(int k = j+1; k < n; k++){
				int sum = v[i] + v[j] + v[k];
				if(sum == 0){
					res.push_back({v[i], v[j], v[k]});
				}
			}
		}
	}
	for(auto x : res){
		for(auto y : x){
			cout << y << " ";
		} 
		cout << endl;
	}
}