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
    for(auto &it : v) cin>>it;

    sort(all(v));
    int last = v.back();
    if (last > 0) {
        int x = last * 2;
        if (x != last) {
            cout<<last<<" "<<last<<nl;
        } else {
            cout<<-1<<nl;
        }
    } else if (last <= 0) {
        int first = v.front();
        int y = first * 2;
        if (y != first) {
            cout<<first<<" "<<first<<nl;
        } else {
            cout<<-1<<nl;
        }
    } else {

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