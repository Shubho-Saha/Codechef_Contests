#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x)
#define dbgsize(x)
#endif

const int mod = 998244353;
int dp[1003];

void solve()
{
    int n;
    cin>>n;

    if (n & 1) {
        cout<<dp[n]<<nl;
    } else {
        int res = (dp[n] + dp[n-1]) % mod;
        cout<<res<<nl;
    }
}

int main()
{
    fastIO();
    int t; cin>>t;

    dp[1] = 1;
    for(int i=2; i<=1001; i++) {
        dp[i] = (dp[i-1] * 2) % mod;
    }
    while(t--) {
        solve();
    }
    
    return 0;
}