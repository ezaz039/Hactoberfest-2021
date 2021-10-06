#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define PI 3.141592653589793238462
#define all(vec) vec.begin(), vec.end()
#define minn(vec) *min_element(all(vec))
#define maxx(vec) *max_element(all(vec))
#define sum(vec) accumulate(all(vec), 0)
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define sz(x) ((int)(x).size())
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << "\n";
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
const ll inf = INT_MAX;
const int N = 2000500;
const int M = 1e9;
 
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    multiset<int> s;
    for(int i=0;i<n;i++){
        cin >> a[i];
        auto it = s.upper_bound(a[i]);
        if(it==s.end())
        s.insert(a[i]);
        else{
            s.erase(it);
            s.insert(a[i]);
        }
    }
    cout << sz(s) << "\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif
    int T;
    //cin >> T;
    T = 1;
    for (int t = 0; t < T; t++)
    {
        solve();
    }
    return 0;
}
