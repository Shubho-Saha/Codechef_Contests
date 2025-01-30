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
        int n, p;
        cin>>n>>p;
        vector<int> v(n), res(n, -1);
        int f = -1, l = -1;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if (v[i] == 0) {
                if (f == -1) f = i;
                l = i;
            }
        }

        int lmax = 0;
        for(int i=f; i<n; i++) {
            if (v[i] == 0) {
                lmax = 0;
                res[i] = 0; continue;
            }
            int crnt = ceil(1.0*v[i]/p);
            lmax = max(crnt, lmax);
            res[i] = lmax;
        }

        int rmax = 0;
        for(int i=l; i>=0; i--) {
            if (v[i] == 0) {
                rmax = 0;
                res[i] = 0; continue;
            }
            int crnt = ceil(1.0*v[i]/p);
            rmax = max(crnt, rmax);
            if (res[i] == - 1) res[i] = rmax;
            else {
                res[i] = min(res[i], rmax);
            }
        }

        for(auto x : res) {
            cout<<x<<" ";
        }
        cout<<nl;


    }

    return 0;
}