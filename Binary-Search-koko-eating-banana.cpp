#include <algorithm>
#include <bits/stdc++.h>
using namespace std;                   

int main() {
    vector< int > ar={1,4,3,2};
    int h=9;
    int mx=*max_element(ar.begin(),ar.end());
    int time=h/ar.size();
    cout<<ceil(mx/time)<<endl;

}