#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

int main() {
	vector<int> v = {1,2,4,6};
	// vector<int> v = {-1,0,1,2,3};
	// vector<int> v = {0,0};
	int prod = 1;
	int count = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] != 0){
			prod *= v[i];
		} else {
			count++;
		}
	}
	vector<int> p;
	for(int i = 0; i < v.size(); i++){
		if(count == 0){
			p.push_back(prod / v[i]);
		} else if(count == 1){
			if(v[i] != 0){
				p.push_back(0);
			} else {
				p.push_back(prod);
			}
		} else {
			p.push_back(0);
		}
	}	
	// cout << prod << " " << count << endl;
	for(auto val : p){
		cout << val << " ";
	}
}