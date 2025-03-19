#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;

        if (abs(x-y) < 2) {
            cout<<x+y<<nl;
        } else {
            int mn = min(x, y);
            int mx = max(x, y);
            int rem = mx - (mn+1);
            int res = mn + mn+1;
            res += (rem*2);
            cout<<res<<nl;
        }
    }

    return 0;
}