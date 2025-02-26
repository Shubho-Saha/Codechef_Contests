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

    bool flag = false;
    for(auto c : s) {
        if (c != 'z') {
            flag = true;
        }
    }

    if (flag) {
        for(int i=0; i<n; i++) {
            cout<<'z';
        }
        cout<<nl;
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