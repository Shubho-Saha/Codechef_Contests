#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() 
{
    int n, x;
    cin>>n>>x;
    vector<int> v(n);
    int sum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum += v[i];
    }

    int ans = ceil(sum*1.0/x);
    cout<<ans<<nl;

    
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