#include <bits/stdc++.h>
using namespace std;                   

// bool comp(pair<int,int> a, pair<int,int> b){
//     return a.second > b.second;
// }

int main() {
    vector<int> v = {1,2,2,3,3,3};
    int k = 2;

    map<int,int> mp;
    for(auto &val : v){
        mp[val]++;
    }

    vector<pair<int,int>> vp(mp.begin(), mp.end());
    // sort(vp.begin(), vp.end(), comp);

    sort(vp.begin(), vp.end(), [](pair<int,int>a,pair<int,int>b){return a.second > b.second;});
    for(int i = 0; i < k; i++){
        cout << vp[i].first << endl;
    }

    // for(auto &val : vp){
    //     cout << val.first << " " << val.second << endl;
    // }
}
 