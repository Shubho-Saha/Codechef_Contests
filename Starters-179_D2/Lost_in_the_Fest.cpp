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
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int vumi = v[n-1], vidx = n-1;
    for(int i=0; i<n-1; i++) {
        if (v[i] >= vumi) {
            vidx = i;
            break;
        }
    }

    cout<<(n-1) - vidx<<nl;
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