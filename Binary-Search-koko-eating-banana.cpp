#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;         

int hrscnt(vector<int> v, int rate){
    int time = 0;
    for(double val : v){
        time += ceil(val / rate); // ekhane int use korle ceil kaj korbena. 
    }
    return time;
}

int minEatingSpeed(vector<int> v, int h){
    int mxelem = *max_element(v.begin(), v.end());
    if(v.size() == h) return mxelem;

    int minrate = INT_MAX;
    int left = 1;
    int right = mxelem;

    while(left <= right){
        int rate = left + (right - left) / 2;

        int hours = hrscnt(v,rate);
        if(hours <= h){
            right = rate - 1;
            minrate = min(minrate, rate);
        } else {
            left = rate + 1;
        }
    }
    return minrate;
}          

int main() {
    vector<int> piles = {1,4,3,2};
    int h = 9;

    vector<int> p1 = {25,10,23,4};
    int h1 = 4;
    cout << minEatingSpeed(piles, h) << endl;
    cout << minEatingSpeed(p1, h1);
}