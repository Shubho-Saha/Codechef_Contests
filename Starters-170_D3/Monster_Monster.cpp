#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, x;
    cin>>n>>x;

    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    ll mxval = 0;
    for(ll i=0; i<n; i++) {
        ll val = ((n-1) - i) * x + v[i];
        mxval = max(val, mxval);
    }
    cout<<mxval<<nl;
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