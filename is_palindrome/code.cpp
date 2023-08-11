#include <bits/stdc++.h>
#include <sstream>
using namespace std;

class Solution {
public:
    bool isPalindrome(long long x) {
        stringstream ss;
        string s;
        ss << x;
        ss >> s;
        long long len = s.size();
        if(len % 2 == 0){
            string s1 = s.substr(0,len/2);
            string s2 = s.substr(len/2, len/2);
            reverse(s2.begin(), s2.end());
            if(s1 == s2){
                return true;
            }
        } else if(len % 2 == 1){
            s.erase(len/2,1);
            string s1 = s.substr(0,len/2);
            string s2 = s.substr(len/2, len/2);
            reverse(s2.begin(), s2.end());
            if(s1 == s2){
                return true;
            }
    }
    return false;
    }
};
