#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int zero = 0;
    int one = 0;

    ll cnt = 0;
    for(int i=0; i<n; i++) {
        if (s[i] == '0') {
            zero++;
        } else {
            one++;
        }

        if (zero == one) {
            cnt++;
        }
    }

    if (cnt == 0) {
        cout<<1<<nl;
    } else {
        ll res = (1ll << cnt);
        cout<<res<<nl;
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