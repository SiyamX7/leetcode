#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;          

vector<int> dailyTemperatures(vector<int>& v) {
    stack<int> st;
    unordered_map<int,int> mp;
    vector<int> res(v.size());

    for(int i = 0; i < v.size(); i++){
        if(i == v.size() - 1){
            mp[i] = 0;
        } else {
            int x = v[i];
            int y = v[i+1];
            if(x < y){
                st.push(x);
            } else {
                st.pop();
                mp[i] = 
            }
        }
    }
}         

int main() {
	vector<int> temperatures = {30,38,30,36,35,40,28};
	vector<int> res = dailyTemperatures(temperatures);
	for(auto val : res) cout << val << " ";
}