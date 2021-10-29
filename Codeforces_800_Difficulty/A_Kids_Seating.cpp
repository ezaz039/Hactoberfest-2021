#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define ll          long long
#define pb          push_back
#define eb 			emplace_back  //faster than pb
#define mk 			make_pair
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<ll,ll>
#define graph vector<vector<int>>
#define mii         map<pii,ll>
#define maxe(v)     *max_element(v.begin(),v.end())
#define all(a)      (a).begin(),(a).end()
#define fi          first
#define si          second
#define sz(x)       (ll)x.size()
#define endl        '\n'
#define checkbit(n, b) ((n >> b) & 1)
#define mod        1000000007
#define inf        1000000000000000000
#define puts(n)		cout<<n;
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define fo(n) for(int i = 0; i < n; i++)
#define for2d(n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++)}
#define fori(x, y) for(ll i = (x); i < (y); i++)
#define forj(x, y) for(ll j = (x); j < (y); j++)
#define setbits(x) __builtin_popcount(x)             ////to count the number of one’s(set bits) in an integer.
#define setbitsll(x) __builtin_popcountll(x)
#define mset(m,v) memset(m,v,sizeof(m)) ////converta all sizeof(m) elements of m into v
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc int T;cin>>T;while(T--)
using namespace std;
ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}
int main()
{
	fast
	tc
	{
		int n;cin>>n;
		int i=2+2*n;
		while(n)
		{
			cout<<i<<" ";
			i+=2;
			n--;
		}
		cout<<endl;
	}
}