#include <bits/stdc++.h>
using namespace std;                   

int maxArea(vector<int>& v) {
    int left = 0;
    int right = v.size()-1;
    int mxarea = INT_MIN;

    while(left < right){
        int h = min(v[left], v[right]);
        int area = h * (right - left);
        mxarea = max(mxarea,area);
        if(v[left] < v[right]){
            left++;
        } else {
            right--;
        }
    }
    return mxarea;
}

int main() {
	vector<int> height = {1,7,2,5,4,7,3,6};
	int max = maxArea(height);
	cout << "Maximum Area: " << max << endl;
}