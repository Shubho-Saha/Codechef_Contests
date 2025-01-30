#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int m, k;
    cin>>m>>k;
    string s;
    cin>>s;
    int scnt = 0;
    for(auto c : s) {
        if (c == 'S') scnt++;
    }

    if (scnt >= k) {
        cout<< m <<nl;
    } else {
        int need = k - scnt;
        cout<<(m+need)-1<<nl;
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