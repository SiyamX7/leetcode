#include <bits/stdc++.h>
using namespace std;                   
#define vi vector<int>
#define MAX 100

vi prefix(MAX,0);

int mean(int l, int r){
	if(l == 0) return prefix[r] / (r+1);

	return (prefix[r] - prefix[l-1]) / (r - l + 1);
}

int main() {
	vi x = {1,2,3,4,5};
	for(int i = 0; i < x.size(); i++){
		if(i == 0){
			prefix[0] = x[0];
		} else {
			prefix[i] = x[i] + prefix[i-1];
		}
	}

	cout << mean(0,2) << endl;
	cout << mean(1,3) << endl;
	cout << mean(0,4) << endl;


	// for(auto val : prefix) cout << val << " ";
}