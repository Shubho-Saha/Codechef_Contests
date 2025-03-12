#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}
void solve()
{
    int n;
    cin>>n;
    vector<int> x(n), y(n);
    for(int i=0; i<n; i++) {
        cin>>x[i];
    }
    for(int i=0; i<n; i++) {
        cin>>y[i];
    }

    int p = y[0];
    vector<pair<int,int>> res;
    for(int i=0; i<n; i++) 
    {
        int val = x[i];
        res.push_back({abs(p-val), val});
    }
    sort(all(res), cmp);

    vector<int> copy;
    for(auto [f, s] : res) {
        copy.push_back(s);
    }

    bool flag = true;
    for(int i=0; i<n; i++) {
        if (copy[i] != y[i]) {
            flag = false;
        }
    }

    if (flag) {
        
        for(int i=0; i<n; i++) {
            if (x[i] == p) {
                cout<<i+1<<nl;
                break;
            }
        }
    } else {
        cout<<-1<<nl;
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