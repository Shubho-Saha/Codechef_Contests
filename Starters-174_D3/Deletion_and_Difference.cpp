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
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        mp[x]++;
    }

    if (mp.size() == n) {
        cout<<n<<nl;
        return;
    }

    vector<int> res;
    int zero = 0;
    for(auto [key, val] : mp) {
        if (key == 0) {
            zero += val;
        } else {
            if (val % 2 == 0) {
                zero += val/2;
            } else {
                res.push_back(key);
                val--;
                zero += val/2;
            }
        }
    }

    if (zero > 0) {
        cout<<res.size()+1<<nl;
    } else {
        cout<<res.size()<<nl;
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