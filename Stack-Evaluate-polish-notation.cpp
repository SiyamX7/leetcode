#include <bits/stdc++.h>
using namespace std; 

int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for(auto val : tokens){
        if(val != "+" && val != "-" && val != "*" && val != "/"){
            st.push(stoi(val));
        }

        else if (val == "+"){
            int x = int(st.top()); st.pop();
            int y = int(st.top()); st.pop();
            st.push(x+y);
        }

        else if (val == "-"){
            int x = int(st.top()); st.pop();
            int y = int(st.top()); st.pop();
            st.push(y-x);
        }

        else if (val == "*"){
            int x = int(st.top()); st.pop();
            int y = int(st.top()); st.pop();
            st.push(x*y);
        }

        else if (val == "/"){
            int x = int(st.top()); st.pop();
            int y = int(st.top()); st.pop();
            st.push(y/x);
        }
    }
    return st.top();
}                  

int main() {
    vector<string> tokens = {"1","2","+","3","*","4","-"};
    cout << evalRPN(tokens);
}