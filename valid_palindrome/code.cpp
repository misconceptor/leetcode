#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string transform(string p)
    {
        string a = "";
        for(int i=0; i<p.size(); ++i){
            int num = (int) p[i];
            if(num >=65 && num <= 90){
                a += tolower(p[i]);
            } else if(num >=97 && num <= 122){
                a += p[i];
            } else if(num >= 48 && num <= 57){
                a += (char) num;
            }
        }
        return a;
    }

    bool isPalindrome(string s) {
        s = transform(s);
        int len = s.size();
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
