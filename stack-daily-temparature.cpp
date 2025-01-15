#include <bits/stdc++.h>
#include <vector>
using namespace std;          

vector<int> dailyTemperatures(vector<int>& v) {
	vector<int> res(v.size());
    stack<int> st;

    st.push(v[0]);
    int count = 0;
    for(int i = 1; i < v.size(); i++){
    	if(st.empty()) count = 0;

    	if(v[i] <= st.top()){
    		st.push(v[i]);
    	} else {
    		st.pop();
    		res[i] = ++count;
    	}
    }
    return res;
}         

int main() {
	vector<int> temperatures = {30,38,30,36,35,40,28};
	vector<int> res = dailyTemperatures(temperatures);
	for(auto val : res) cout << val << " ";
}