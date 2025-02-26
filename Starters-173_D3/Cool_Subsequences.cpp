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
    vector<int> v(n);
    map<int, int> mp;
    int ans = -1;
    bool flag = false;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        mp[x]++;
        
        if (mp[x] >= 2) {
            flag = true;
            ans = x;
        }
    }

    if (flag) {
        cout<<1<<nl;
        cout<<ans<<nl;
    } else {
        cout<<ans<<nl;
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