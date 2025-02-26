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
    for(int i=1; i<=n; i++) {
        int x; cin>>x;
        mp[x] = i;
    }

    if (n < 2) {
        cout<<"YES"<<nl;
        return;
    }

    bool flag = true;
    if ((mp[1] != 1 && mp[1] != n) || (mp[2] != 1 && mp[2] != n)) {
        flag = false;
    }

    if (!flag) {
        cout<<"NO"<<nl;
        return;
    }

    multiset<int> pq;
    set<int> st;
    st.insert(1); 
    st.insert(n);
    pq.insert(n-1);

    bool ok = true;
    for(int i=3; i<=n; i++) {
        int seat = mp[i];
        auto it = st.lower_bound(seat);
        auto right = *it; it--;
        auto left = *it;
        int gap = right - left;
        int dis1 = right - seat;
        int dis2 = seat - left;

        if (min(dis1, dis2) != (gap/2)) {
            ok = false;
            break;
        }

        auto highit = pq.rbegin();
        int mxAvail = *highit;

        if (gap != mxAvail) {
            if (min(dis1, dis2) != (mxAvail/2)) {
                ok = false;
                break;
            }
        }

        auto elem = pq.find(gap);
        pq.erase(elem);
    
        pq.insert(dis1);
        pq.insert(dis2);
        st.insert(seat);
    }

    if (ok) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
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