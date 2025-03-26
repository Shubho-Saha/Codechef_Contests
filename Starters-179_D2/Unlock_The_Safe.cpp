#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> a(n), b(n), v(n);
    for(auto &it : a) cin>>it;
    for(auto &it : b) cin>>it;

    int mv = 0;
    for(int i=0; i<n; i++) {
        int crnt = a[i];
        int req = b[i];

        int x = abs(crnt-req);
        int y = 9 - x;
        int mn = min(x, y);
        v[i] = mn;
        mv += mn;
    }

    if (k < mv) {
        cout<<"No"<<nl;
    } else {
        int rem = k - mv;
        if (rem % 2 == 0) {
            cout<<"Yes"<<nl;
            return;
        }

        bool flag = false;
        for(int i=0; i<n; i++) {
            int need = rem + v[i];
            int crnt = a[i];
            int req = b[i];

            int x = abs(crnt - req);
            int y = 9 - x;
            if (x <= need && (need-x)% 2 == 0) flag = true;
            if (y <= need && (need-y)% 2 == 0) flag = true;
        }

        if (flag) {
            cout<<"Yes"<<nl;
        } else {
            cout<<"No"<<nl;
        }
    }
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