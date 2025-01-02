#include<bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v = {2,2,1,1,1,2,2};
	int mid = v.size() / 2;

	unordered_map<int,int> mp;

	for(auto val : v){
		mp[val]++;
	}


	for(auto val : mp){
		if(val.second > mid){
			cout << val.first << " is majority element here." << endl;
		}
	}
}