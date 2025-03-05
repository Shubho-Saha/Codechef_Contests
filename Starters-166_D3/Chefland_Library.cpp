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
    map<ll, ll> mp;
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        mp[x] = i;
    }

    ll sum = 0;
    for(auto [key, val] : mp) {
        sum += val;
    }

    cout<<sum<<nl;
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