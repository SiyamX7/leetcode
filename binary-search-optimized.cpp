#include <bits/stdc++.h>
#include <vector>
using namespace std;   

void bins(vector<int> &v, int target){
    int left = 0; 
    int right = v.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(v[mid] == target){
            cout << "target is at index " << mid << endl;
            break;
        } else if (v[mid] < target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}                

int main() {
    vector<int> v = {2,3,5,7,9,11,12,34};
    bins(v,12);
}