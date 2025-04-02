#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n; cin>>n;
    vector<int> v(n);
    ll total = 0;
    for(auto &it : v) {
        cin>>it;
        total += it;
    }

    sort(all(v));
    int q; cin>>q;
    while(q--)
    {
        ll x, y;
        cin>>x>>y;
        auto it = lower_bound(all(v), x);
        if (it == v.end()) {
            ll cnt = 0;
            it--;
            ll crewcap = *it;
            cnt += (x-crewcap);
            ll remcap = total - crewcap;
            if (remcap < y) {
                cnt += (y-remcap);
            }
            cout<<cnt<<nl;

        } else {
            ll cnt1 = 0, cnt2 = 0;
            ll crewbig = *it; 
            ll rem1 = total - crewbig;
            if (rem1 < y) {
                cnt1 += (y-rem1);
            }
            if (it == v.begin()) {
                cout<<cnt1<<nl;
                continue;
            }

            it--;
            ll crewsmall = *it;
            ll rem2 = total - crewsmall;
            cnt2 += (x-crewsmall);
            if (rem2 < y) {
                cnt2 += (y-rem2);
            }

            cout<<min(cnt1, cnt2)<<nl;

        }
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