#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &it : a) cin>>it;
    int mnVal = INT_MAX;
    int mnIdx = -1;
    for(int i=0; i<m; i++) {
        cin>>b[i];
        if (b[i] < mnVal) {
            mnVal = b[i];
            mnIdx = i;
        }
    }

    
    if (m == 1) {
        for(auto x : a) {
            cout<<min(x, mnVal)<<" ";
        }
        cout<<nl;
        return;
    }

    bool flag = false;
    for(int i=0; i<n-m; i++) {
        if (flag) {
            a[i] = mnVal;
            continue;
        }
        if(a[i] > mnVal) {
            a[i] = mnVal;
            flag = true;
        }
    }

    if (flag) {
        int idx = mnIdx;
        for(int i=n-m; i<n; i++) {
            a[i] = b[idx];
            idx = (idx+1) % m;
        }
    } else {
        int j = mnIdx;
        bool ok = false;
        for(int i=n-m; i<n; i++) {
            if (ok) {
                a[i] = b[j];
                j = (j+1)%m;
                continue;
            }
            if (a[i] < b[j]) {
                break;
            } else if (a[i] == b[j]) {
                j = (j+1)%m;
            } else {
                a[i] = b[j];
                j = (j+1)%m;
                ok = true;
            }
        }
    }

    for(auto x : a) {
        cout<<x<<" ";
    }
    cout<<nl;
    
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}