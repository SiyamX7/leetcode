#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;   

int findMin(vector<int> &v) {
    if(v.size() == 1) return v[0];
    if(v.size() == 2) return min(v[0],v[1]);

    int left = 0;
    int right = v.size() - 1;
    if(v[left] < v[right]) return v[left];

    while(left <= right){
        int mid = (left+right) / 2;

        if(v[mid - 1] > v[mid] && v[mid] < v[mid + 1])
        {
            return v[mid];
        } 
        else if (v[0] > v[mid] && (v[mid - 1] < v[mid] && v[mid] < v[mid + 1]))
        {
			right = mid - 1;
        }
        else if (v[0] < v[mid] && (v[mid - 1] < v[mid] && v[mid] < v[mid + 1]))
        {
            left = mid + 1;
        }
        else if(v[0] < v[mid] && (v[mid - 1] < v[mid] && v[mid] > v[mid + 1])) {
        	return v[mid + 1];
        }

        else 
        {
            left = mid + 1;
        }
    }
    return -1;
}
                

int main() {
	vector<int> v = {4,0,1,2,3};
	vector<int> vv = {3,4,5,6,1,2};
	vector<int> g = {2,3,1};
	cout << findMin(v) << endl;
	cout << findMin(vv) << endl;
	cout << findMin(g) << endl;
}