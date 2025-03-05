#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mp[x] = i;
    }

    int rank = 1;
    for(auto [key, val] : mp)
    {
        vec[val] = rank;
        rank++;
    }
    
    int ans = n;
    for(int i=0; i<n-1; i++) {
        if (abs(vec[i] - vec[i+1]) == 1) {
            ans--;
        }
    }
    cout<<ans<<nl;
    
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}