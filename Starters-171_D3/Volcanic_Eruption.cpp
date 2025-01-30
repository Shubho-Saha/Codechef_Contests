#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, p;
    cin>>n>>p;
    vector<ll> v(n);
    ll first = - 1, last = -1;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i] == 0) {
            if (first == - 1) first = i;
            last = i;
        } 
    }
    vector<int> res(n);
    ll mxVal = 0;
    for(int i=first; i>=0; i--) {
        if (v[i] == 0) {
            mxVal = 0;
            res[i] = 0;
            continue;;
        }
        ll crnt = ceil(1.0*v[i]/p);
        mxVal = max(crnt, mxVal);
        res[i] = mxVal;
    }

    mxVal = 0;
    for(int i=last; i<n; i++) {
        if (v[i] == 0) {
            mxVal = 0;
            res[i] = 0;
            continue;;
        }
        ll crnt = ceil(1.0*v[i]/p);
        mxVal = max(mxVal, crnt);
        res[i] = mxVal;
    }

    if (first != last) {
        ll mxV = 0;
        for(int i=first; i<last; i++) {
            if (v[i] == 0) {
                mxV = 0;
                res[i] = 0;
                continue;
            }
            ll crnt = ceil(1.0*v[i]/p);
            mxV = max(crnt, mxV);
            res[i] = mxV;
        }

        mxV = 0;
        for(int i=last; i>first; i--) {
            if (v[i] == 0) {
                mxV = 0;
                res[i] = 0;
                continue;
            }
            ll crnt = ceil(1.0*v[i]/p);
            mxV = max(mxV, crnt);
            ll prev = res[i];
            res[i] = min(prev, mxV);
        }
    }

    for(auto x : res) {
        cout<<x<<" ";
    }
    cout<<nl;
    
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