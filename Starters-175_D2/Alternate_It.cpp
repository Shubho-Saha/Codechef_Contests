#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();

    bool flag = true;
    for(int i=0; i<n-1; i++) {
        if (s[i] == s[i+1]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout<<0<<nl;
        return;
    }

    int onecnt = count(all(s), '1');
    int zerocnt = count(all(s), '0');
    if (abs(onecnt - zerocnt) < 2) {
        cout<<1<<nl;
        return;
    }
    
    int need = (n/2) - min(onecnt, zerocnt);

    if (need == 1) {
        cout<<2<<nl;
    } else {
        cout<<3<<nl;
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