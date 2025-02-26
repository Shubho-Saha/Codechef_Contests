#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    string a, b, c;
    cin>>a>>b>>c;

    int a0 = count(all(a), '0');
    int a1 = count(all(a), '1');
    int b0 = count(all(b), '0');
    int b1 = count(all(b), '1');
    int c0 = count(all(c), '0');
    int c1 = count(all(c), '1');
    
    if ((a0+b0+c0) % n != 0 ) {
        cout<<-1<<nl;
    } else {
        char mnElem = (a0+b0+c0 < a1+b1+c1) ? '0' : '1';
        int mn1 = n - count(all(a), mnElem);
        int mn2 = n - count(all(b), mnElem);
        int mn3 = n - count(all(c), mnElem);
        if ((a0+b0+c0)== 0 || ((a0+b0+c0) == 3*n)) {
            cout<<0<<nl;
        } else {
            cout<<min({mn1, mn2, mn3})<<nl;
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