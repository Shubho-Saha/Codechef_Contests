#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
#include "../DebugTemplate/debug.h"
#else
#define debug(x)
#define dbgsize(x)
#endif

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> grid(n, vector<int>(m));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    vector<pair<int,int>> d = {{1,1}, {1,-1}, {-1,-1}, {-1,1}};
    map<int, int> mp;
    int mxval = 0;
    for(auto [f, s] : d)
    {    
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++)
            {
               int val = grid[i][j];
               int x = val - (i*f) - (j*s);
               mp[x]++;
               mxval = max(mxval, mp[x]);
            }
        }
        mp.clear();
    }

    debug(mxval);
    int res = (n*m) - mxval;
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