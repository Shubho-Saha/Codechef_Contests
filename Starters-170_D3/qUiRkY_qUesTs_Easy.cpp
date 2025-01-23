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
    ll sum = 0;
    for(ll i=0; i<n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    sort(all(v));
    ll presum = 0;
    for(ll i=0; i<n; i++) {
        ll crntSum = presum + v[i];
        ll posSum = (i+1) * (i+1);
        if (posSum >= crntSum) {
            presum = posSum;
        } else {
            presum = crntSum;
        }
    }

    cout<<presum<<nl;
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