#include <bits/stdc++.h>
using namespace std;                   

int main() {
    vector<string> s = {"eat","tea","tan","ate","nat","bat"};
    vector<pair<string,int>> vp;
    vector<vector<string>> vs;

    for(int i = 0; i < s.size(); i++){
        vp.push_back({s[i], i});
    }

    for(auto &val : vp){
        sort(val.first.begin(), val.first.end());
    }

    sort(vp.begin(), vp.end());

    unordered_map<string,vector<int> > mp;

    for (auto &val : vp){
        mp[val.first].push_back(val.second);
    }

    for(auto &val : mp){
        vector<string> temp;
        for(auto a : val.second){
            temp.push_back(s[a]);
        }
        vs.push_back(temp);
    }

    for(auto &val : vs){
        for(auto &a : val){
            cout << a << " ";
        } 
        cout << endl;
    }
    // for(auto val : mp) cout << val.first << " "  << endl;
    // for(int i = 0; i < vp.size(); i++){
    //     if(v)
    // }
}