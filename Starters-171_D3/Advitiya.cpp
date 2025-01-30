#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    string s;
    cin>>s;

    string str = "ADVITIYA";

    int cnt = 0;
    for(int i=0; i<8; i++) {
        if (s[i] != str[i]) {
            if (s[i] < str[i]) {
                cnt += str[i] - s[i];
            } else {
                int a = 'Z' - s[i];
                int b = str[i] - 'A';
                cnt += (a+b)+1;
            }
        }
    }
    cout<<cnt<<nl;

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