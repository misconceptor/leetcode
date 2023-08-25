#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isValid(string s) {
        stack<char> p;
        for(int i=0; i<s.size(); ++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                p.push(s[i]);
            }

            if(s[i] == ')') {
                if (!p.empty() && p.top() == '(') {
                    p.pop();
                } else {
                    return false;
                }
            }

            if(s[i] == ']') {
                if (!p.empty() && p.top() == '[') {
                    p.pop();
                } else {
                    return false;
                }
            }

            if(s[i] == '}') {
                if (!p.empty() && p.top() == '{') {
                    p.pop();
                } else {
                    return false;
                }
            }
        }
        if(p.empty()){
            return true;
        } else {
            return false;
        }
    }
};
