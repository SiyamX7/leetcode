#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {0,1,0,3,12};
	vector <int> vv;
	for(int i = 0; i < v.size(); i++){
		if(v[i] != 0){
			vv.push_back(v[i]);
		}
	}

	for(int i = 0; i < vv.size(); i++){
		v[i] = vv[i];
	}

	for(int i = vv.size(); i < v.size(); i++){
		v[i] = 0;
	}
	for(auto val : vv){
		cout << val << " ";
	}
	cout << endl;
	
	for(auto val : v){
		cout << val << " ";
	}	
}