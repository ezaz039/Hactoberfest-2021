#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define ll          long long
#define pb          push_back
#define eb          emplace_back  //faster than pb
#define mk          make_pair
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
#define puts(n)     cout<<n;
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define fo(n) for(int i = 0; i < n; i++)
#define for2d(n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)
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
const ll N = 2e5+5;
vector<ll> g[N];
ll n;
ll up[N][20];
ll lvl[N];
ll ans[N];
void binary_lifting(ll u,ll pv)
{
    up[u][0]=pv;
    fori(1,20)
    {
        if(up[u][i-1]!=-1)up[u][i]=up[up[u][i-1]][i-1];
        else up[u][i]=-1;
    }
    for(ll i:g[u])
    {
        if(i!=pv)binary_lifting(i,u);
    }
}
ll lift_node(ll x,ll k)
{
    if(x==-1 || k==0)return x;
    ll t;
    for(ll i=19;i>=0;i--)
    {
        t = (1ll<<i);
        if(k < t)continue;
        return lift_node(up[x][i],k-t);
    }
    return -1;
}
void dfs(ll u,ll pv,ll l)
{
    lvl[u]=l;
    for(ll i:g[u])
    {
        if(i==pv)continue;
        dfs(i,u,l+1);
    }
}
ll dfs1(ll u,ll pv)
{
    for(ll i:g[u])
    {
        if(i==pv)continue;
        ans[u]+=dfs1(i,u);
    }
    return ans[u];
}
ll LCA(ll u,ll v)
{
    if(lvl[u]<lvl[v])swap(u,v);
    u = lift_node(u,lvl[u]-lvl[v]);
    if(u==v)return u;
    for(ll i=19;i>=0;i--)
    {
        if(up[u][i]!=up[v][i])
        {
            u=up[u][i];
            v=up[v][i];
        }
    }
    return lift_node(u,1);
}
int main()
{
    fast
    int q;
    cin>>n>>q;
    ll x,y;
    fori(2,n+1)
    {
        cin>>x>>y;g[x].pb(y);g[y].pb(x);
    }
    mset(up,-1);
    binary_lifting(1,-1);
    dfs(1,0,0);
    while(q--)
    {
        cin>>x>>y;
        ll k=LCA(x,y);
        ans[x]++;ans[y]++;
        ans[k]--;
        k=lift_node(k,1);
        ans[k]--;
    }
    dfs1(1,0);
    fori(1,n+1)cout<<ans[i]<<" ";
}