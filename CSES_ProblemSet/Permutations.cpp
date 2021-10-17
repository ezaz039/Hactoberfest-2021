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
    cin>> n;
    if(n==1)
    {
        cout<<1;
        return;
    }
    if(n<=3){
    cout<<"NO SOLUTION";
    return;
    }
    vector<ll> v;
    vector<ll> u;
    for(ll i=0;i<n;i++)
    {
        if((i+1)%2==0)
        v.pb(i+1);
        else u.pb(i+1);
    }
    for(ll i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    for(ll i=0;i<u.size();i++)
    {
        cout<<u[i]<<" ";
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