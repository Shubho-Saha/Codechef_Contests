#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
#include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

void solve()
{
    vector<int> v(3);
    cin>>v[0]>>v[1]>>v[2];

    sort(all(v));
    int a = v[0], b = v[1];

    int res;
    if (a == 0 && b == 0) {
        res = 0;
    } else if (a != 0 && b != 0) {
        if (a%2 != 0 && b % 2 != 0) {
            res = a+b-1;
        } else {
            res = a+b;
        }
    } else {
        res = max(a, b);
    }
    
    cout<<res<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) 
    {
        solve();
    }
    
    return 0;
}