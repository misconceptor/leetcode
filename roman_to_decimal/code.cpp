#include <bits/stdc++.h>
using namespace std;

string s;
map<char,int> m;
int ans;
    
int main()
{
    cin >> s;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int l = s.size();

    for (int i=0; i<l; ++i){
        int s1 = (m[s[i]]);
 
        if (i + 1 < l)
        {
            int s2 = m[s[i+1]];
            if (s1 >= s2){
                ans += s1;
            } else {
                ans += (s2-s1);
                ++i;
            }

        } else {
            ans += s1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
