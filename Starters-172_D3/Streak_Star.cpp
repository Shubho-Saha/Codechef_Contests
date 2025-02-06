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
        int n, x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        int mxln = 1;
        for(int i=0; i<n; i++) {
            int tmp = v[i];
            v[i] *= x;
            int crntln = 1;
            for(int j=1; j<n; j++) {
                if (v[j] >= v[j-1]) {
                    crntln++;
                    mxln = max(crntln, mxln);
                } else {
                    crntln = 1;
                }
            }
            v[i] = tmp;
        }

        cout<<mxln<<nl;
    }

    return 0;
}