#include <bits/stdc++.h>
using namespace std;     

int lengthOfLongestSubstring(string s) {
    int left = 0; 
    int right = 1;
    int mx = INT_MIN;

    while (right < s.size()){
        int length = right - left + 1;
        string sub = s.substr(left, length);
        unordered_set<char> st(sub.begin(), sub.end());

        if(length == st.size()){
            mx = max(mx,length);
            right++;
        } else {
            left++;
        }
    }
    return mx;
}              

int main() {
	string s="abcabcbb", y ="";

	int x = lengthOfLongestSubstring(s);
	cout << x << endl;
	cout << y.size();
}