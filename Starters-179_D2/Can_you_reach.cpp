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
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }

    vector<int> peaks;
    for(int i=2; i<n; i++) {
        if (v[i] > v[i-1] && v[i] > v[i+1]) {
            peaks.push_back(i);
        }
        if (v[i] < min(v[i-1], v[i+1])) {
            peaks.push_back(i);
        }
    }
    

    ll total = ((n*(n-1))/2);
    ll prev = 1, enemy = 0;
    ll sz = peaks.size();

    for (int i = 0; i < sz - 1; i++)
    {
        ll a = peaks[i] - prev;
        ll b = n - peaks[i + 1];
        enemy += (a * b);
        prev = peaks[i];
    }

    cout<<total-enemy<<nl;
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