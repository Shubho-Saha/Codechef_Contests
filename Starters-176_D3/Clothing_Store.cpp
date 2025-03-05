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
        int x, y, z;
        cin>>x>>y>>z;
        int a, b, c;
        cin>>a>>b>>c;

        int cnt = 0;
        if (x >= a) {
            x -= a;
            cnt += a;
            a = 0;
        } else {
            cnt += x;
            a -= x;
            x = 0;     
        }


        if (y >= a) {
            y -= a;
            cnt += a;
            a = 0;
        } else {
            cnt += y;
            a -= y;
            y = 0;
        }


        if (z >= a) {
            z -= a;
            cnt += a;
            a = 0;
        } else {
            cnt += z;
            a -= z;
            z = 0;
        }


        if (y >= b) {
            y -= b;
            cnt += b;
            b = 0;
        } else {
            cnt += y;
            b -= y;
            y = 0;
        }

        if (z >= b) {
            z -= b;
            cnt += b;
            b = 0;
        } else {
            cnt += z;
            b -= z;
            z = 0;
        }

        if (z >= c) {
            z -= c;
            cnt += c;
            c = 0;
        } else {
            cnt += z;
            c -= z;
            z = 0;
        }

        cout<<cnt<<nl;
    }
    return 0;
}