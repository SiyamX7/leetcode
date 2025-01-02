#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;                   

int main() {
	vector<int> v = {2,20,4,10,3,4,5};
	// vector<int> v = {0,3,2,5,4,6,1,1};
	// vector<int> v = {1,1,1,1,1,1,1,1};

	set<int> s(v.begin(), v.end());
	vector<int> nv(s.begin(), s.end());
	int mx = 1;
	int current = 1;
	for(int i = 0; i < nv.size()-1; i++){
		if(nv[i+1] == nv[i]+1){
			current++;
			mx = max(mx,current);
		} else {
			current = 1;
		}
	}
	cout << mx ;
}