#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    string A, B;
    cin >> A >> B;
    int n = A.size();
    int m = B.size();

    vector<int> remove(n, 0);
    int r = m-1;
    for(int i=n-1; i>=0; i--) {
        if (A[i] == B[r]) {
            r--;
            remove[i] = 1;
        }
        if (r == -1) break;
    }

    if (r != -1) {
        cout<<-1<<nl;
    } else {
        ll ans = 0, cost = 1;
        for(int i=0; i<n; i++) {
            if (remove[i] == 0) {
                ans += cost;
            } else {
                cost++;
            }
        }
        cout<<ans<<nl;
    }
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}