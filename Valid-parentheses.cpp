#include <bits/stdc++.h>
#include <stack>
#include <unordered_map>
using namespace std;                

bool isValid(string s) {
    stack<char> st;
    unordered_map<char,char> mp = { {'(',')'} , {'{','}'} , {'[',']'} };

    for(char x : s){
    	if(st.size()==0 && (x == ')' || x == ']' || x == '}')) return false;
    	
    	if(mp.find(x) != mp.end()){
    		st.push(x);
    	} else {
    		if(mp[st.top()] != x){
    			return false;
    		} else {
    			st.pop();
    		}
    	}
    }
    return true;
}   

int main() {
	string s = "]]";
	bool flag = isValid(s);
	cout << (flag ? "yes" : "no");
}