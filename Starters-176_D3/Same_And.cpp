#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, m;
    cin>>n>>m;

    vector<ll> v;
    v.push_back(n);
    for(int i=0; i<62; i++)
    {
        ll val = (1ll<<i);
        ll z = (val|n);
        if (z <= n || z > m) continue;
        v.push_back(z);
    }

    if (v.size() == 1) {
        cout<<-1<<nl;
    } else {
        cout<<v.size()<<nl;
        for(auto x : v) {
            cout<<x<<" ";
        }
        cout<<nl;
    }
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