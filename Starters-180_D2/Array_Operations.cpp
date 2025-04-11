#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it : v) cin>>it;
    if (n==1) {
        cout<<v.front()<<nl;
        return;
    }

    ll mx = 0;
    ll t = n/2;
    // cout<<t<<nl;
    for(int i=0; i<n; i++) {
        ll val = v[i];
        if (i % 2 != 0) {
            ll crnt = val + (t-1);
            mx = max(mx, crnt);
        } else {
            ll crnt = val + t;
            mx = max(mx, crnt);
            
        }
    }

    cout<<mx<<nl;
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