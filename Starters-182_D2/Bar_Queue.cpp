#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

void solve()
{
    int n; 
    cin>>n;
    string s;
    cin>>s;

    int b = 0, g = 0, cnt = 0;
    for(auto c : s) {
        if (c == 'B') b++;
        else g++;
        cnt++;

        if (b > (2*g)) break;
    }

    cout<<cnt<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    
    return 0;
}