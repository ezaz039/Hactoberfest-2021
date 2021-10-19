#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
using namespace std;
void solve()
{
  ll n;
  cin>>n;
  ll a = 5;
  ll ans = 0;
  for(ll i=1; a<=n ; i++)
  {
    ans += floor(n/a);
    a = a*5;
  }
  cout << ans <<endl;
  
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