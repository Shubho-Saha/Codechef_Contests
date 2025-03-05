#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, c;
    cin>>n>>c;
    string s;
    cin>>s;

    int acnt = count(all(s), 'A');
    int bcnt = count(all(s), 'B');
    int ccnt = count(all(s), 'C');
    int dcnt = count(all(s), 'D');
    int ecnt = count(all(s), 'E');

    vector<int> v = {acnt, bcnt, ccnt, dcnt, ecnt};
    sort(all(v), greater<>());
    int minCost = (n*(n+1))/2;
    int prev = 0;
    for(int i=0; i<v.size(); i++) {
        int crnt = prev + v[i];
        int rem = n - crnt;
        prev = crnt;
        int cost = c*(i+1);
        cost += (rem*(rem+1))/2;
        minCost = min(minCost, cost);

    }

    cout<<minCost<<nl;
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