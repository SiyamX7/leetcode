#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

int mex(vector<int> &v){
	int mx;
	sort(v.begin(), v.end());
	for(int i = 0; i <= v.size(); i++){
		if(v[i] != i){
			mx = i;
			break;
		}
	}
	return mx;
}

int main() {
	vector<int> v = {0,1,2,3};
	int m = mex(v);
	cout << m;
}