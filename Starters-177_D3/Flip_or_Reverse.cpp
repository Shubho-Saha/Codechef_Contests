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
    string a, b;
    cin>>a>>b;

    vector<pair<int,int>> v;
    bool flag = false;

    int l=-1, r = -1, ln = 0;
    for(int i=0; i<n; i++) {
        if (a[i] != b[i]) {
            ln++; 
        } else {
            if (ln>0) {
                r = i;
                l = r - ln+1;
                v.push_back({l, r});
            }
            ln = 0;
        }
    }
    if (a.back() != b.back()) {
        r = n;
        l = r - ln +1;
        v.push_back({l,r});
    }

    cout<<v.size()<<nl;
    for(auto [l, r] : v) {
        cout<<1<<" "<<l<<" "<<r<<nl;
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