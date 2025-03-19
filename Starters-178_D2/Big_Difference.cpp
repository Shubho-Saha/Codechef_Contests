#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (k >= (n-1)) {
        cout<<"-1 -1"<<nl;
        return;
    }

    if (n % 2 != 0) {
        cout<<2<<" "<<n<<nl;
    } else {
        if (n - k == 2) {
            cout<<"-1 -1"<<nl;
        } else {
            cout<<2<<" "<<(n-1)<<nl;
        }
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