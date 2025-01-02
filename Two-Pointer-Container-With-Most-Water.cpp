#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;                   

int maxArea(vector<int>& h) {
	int left = 0;
	int right = 1;
	int mx = 0;
	while(right < h.size()){
		int area = min(h[left],h[right]) * (right - left);
		if(area > mx){
			mx = area;
			
		}
	}
}

int main() {
	vector<int> v = {1,7,2,5,4,7,3,6};
	int result = maxArea(v);
	cout << result << endl;
}