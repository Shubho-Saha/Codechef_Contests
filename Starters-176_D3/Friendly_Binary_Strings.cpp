#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    string a, b;
    cin >> a >> b;
    map<pair<int,int>, int> mp;

    for(int i=0; i<n; i++) {
        int mn = min(a[i], b[i]);
        int mx = max(a[i], b[i]);
        mp[{mn, mx}]++;
    }

    int cnt = 0;
    for(auto [key, val] : mp) {
        if (val % 2 != 0) {
            cnt++;
        }
    }
    
    if (cnt > 1) {
        cout<<"NO"<<nl;
    } else {
        cout<<"YES"<<nl;
    }
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}