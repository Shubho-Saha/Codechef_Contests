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
    vector<int> v(n);
    int og;
    int odd = 0, even = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if (i==0) {
            og = x;
        } else {
            if (abs(og-x) % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

    }

    cout<<max(odd,even+1)<<nl;
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