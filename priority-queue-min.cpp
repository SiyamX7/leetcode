#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;                   

int main() {
    vector<int> v = {296, 291, 286, 281, 276, 271, 266, 261, 256, 251, 
                     246, 241, 236, 231, 226, 221, 216, 211, 206, 201, 
                     196, 191, 186, 181, 176, 171, 166, 161, 156, 151, 
                     146, 141, 136, 131, 126, 121, 116, 111, 106, 101, 
                     96, 91, 86, 81, 76, 71, 66, 61, 56, 51, 
                     46, 41, 36, 31, 26, 21, 16, 11, 6, 1};

    priority_queue<int,vector<int>, greater<int>> pq;

    for(auto val : v){
    	pq.push(val);
    }

    while(!pq.empty()){
    	cout << pq.top() << " ";
    	pq.pop();
    }
}