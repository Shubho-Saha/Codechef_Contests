#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int a, b, k;
    cin>>a>>b>>k;

    if (k % 2 == 0) {
        if (abs(a-b) % 2 == 0 && k <= (a+b)) {
            if (abs(a-b) == k) {
                cout<<0<<nl;
            } else {
                int cnt = 0, diff = abs(a-b);
                int x = diff - k;
                cout<<abs(x)/2<<nl;
            }
        } else {
            cout<<-1<<nl;
        }
    } else {
        if (abs(a-b) % 2 != 0 && k <= (a+b)) {
            if (abs(a-b) == k) {
                cout<<0<<nl;
            } else {
                int cnt = 0, diff = abs(a-b);
                int x = diff - k;
                cout<<abs(x)/2<<nl;
            }
        } else {
            cout<<-1<<nl;
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