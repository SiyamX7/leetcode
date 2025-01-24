#include <bits/stdc++.h>
using namespace std;               

class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        unordered_set<char> st(s.begin(), s.end());
        char x = *st.begin();
        char y = *st.begin()+1;
        pair<int,int> p;

        while(right < s.size()){

        	if(s[right] == x){
        		p.first++;
        	} else {
        		p.second++;
        	}

        	if(p.first > p.second && p.second > k){
        		while(p.first > p.second){
        			left++;
        			p.first--;
        		}
        	}

        }
    }
};    

int main() {
	Solution sol;
	string s = "AAABABB";
	int k = 1;
	cout << sol.characterReplacement(s, k) << endl;
}