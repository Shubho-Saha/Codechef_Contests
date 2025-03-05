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
    while(t--) 
    {
        int h, l, w;
        cin>>h>>l>>w;

        int area = 2 * (h*l + h*w + w*l);

        int ans = 1000 / area;
        cout<<ans<<nl;
    }

    return 0;
}