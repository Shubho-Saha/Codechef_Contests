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
    deque<int> dq(n);
    for(int i=0; i<n; i++) {
        cin>>dq[i];
    }

    int mxAns = 0;
    set<int> st;
    for(int i=0; i<n; i++) {
        int left = i;
        int right = n-i-1;
        int crnt = dq[i];
        // cout<<"i: "<<i<<" ";
        if (left == 1) {
            crnt = max(0, crnt-dq[i-1]);
            // cout<<crnt<<" ";
        }
        if (right == 1) {
            // cout<<"b r :"<<crnt<<"  ";
            crnt = max(0, crnt-dq[i+1]);
            // cout<<crnt<<" ";
        }
        // cout<<nl;

        st.insert(crnt);
    }

    int ans = *st.rbegin();
    cout<<ans<<nl;
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