#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

vector<int> diffarray(vector<int> &v) {
    vector<int> copy;
    for(int i=1; i<v.size(); i++) {
        copy.push_back(v[i] - v[i-1]);
    }
    return copy;
}

bool smooth(vector<int> &v)
{
    if (v.size() == 1) return true;
    bool flag = true;
    for(int i=0; i<v.size()-1; i++) {
        if (v[i] >= v[i+1]) {
            flag = false;
            break;
        }
    }

    if (flag == false) return false;
    vector<int> d = diffarray(v);
    return smooth(d);
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    if (n > 31) {
        for(int i=0; i<n; i++) {
            cout<<0;
        }
        cout<<nl;
        return;
    }

    for(int i=0; i<n; i++)
    {
        vector<int> copy;
        for(int j=0; j<n; j++)
        {
            if (j == i) continue;
            copy.push_back(v[j]);
        }
        if (smooth(copy)) {
            cout<<1;
        } else {
            cout<<0;
        }

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