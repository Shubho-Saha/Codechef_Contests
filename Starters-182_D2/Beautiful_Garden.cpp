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
    int n, k, d;
    cin>>n>>k>>d;

    deque<int> dq(n), x;
    for(int i=0; i<n; i++) {
        cin>>dq[i];
    }

    sort(all(dq));
    int limit = n - k, res = 0;
    for(int i=0; i<limit; i++) {
        res += ceil((1.0*d)/dq[i]);
    }

    cout<<res<<nl;
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