#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
ll n;

int main()
{
    cin >> n;
 
    for (ll i=0; i<n; ++i)
    {
        ll val = 1;
        for (ll k = 0; k <= i; ++k)
        {
            cout << " " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
