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
        int x, y;
        cin>>x>>y;

        for(int i=1; i<= x/2; i++) {
            cout<<1;
        }
        for(int i=1; i<=y; i++) {
            cout<<2;
        }
        for(int i=1; i<=x/2; i++){
            cout<<1;
        }
        cout<<nl;
    }

    return 0;
}