#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pb push_back
#define fi first
#define se second
#define M 1000000007
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0)
        n = n/2;
        else n = 3*n + 1;
        cout<<n<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t = 1;
    // ll t;
    // cin >> t;
    while (t--)
        solve();
}