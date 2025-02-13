#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;  

void update(vi& diff, int l, int r, int x){
    diff[l] += x;
    diff[r+1] -= x;
}   

vi finalArray(vi &initial,vi &diff){
    int n = initial.size();
    vi pref(n+1);
    pref[0] = diff[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + diff[i];
    }

    vi final(n, 0);

    for(int i = 0; i < n; i++){
        final[i] = pref[i] + initial[i];
    }

    return final;
} 

void print(vi & v){
    for(auto val : v) cout << val << " ";
    cout << endl;
}             

int main() {
    vi initial = {10,5,20,40};
    int n = initial.size();

    vi diff(n+1,0);
    update(diff,0, 1,10);
    update(diff,0, 1,10);
    update(diff,0, 1,10);
    update(diff,0, 1,10);
    update(diff,0, 1,10);

    vi x = finalArray(initial, diff);
    print(x);
}