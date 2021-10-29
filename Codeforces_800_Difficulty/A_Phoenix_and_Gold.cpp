#include <bits/stdc++.h>
 
#define mp make_pair
#define pb push_back
#define fi first 
#define se second
#define inputarr(a,n) for(int i=0;i<n;++i) cin>>a[i]
 
#define ll long long
#define ld long double 
#define pii std::pair<int, int> 
#define pll std::pair<ll, ll>  
#define vi vector<int>  
#define vvi vector<vi > 
#define vii vector<pii >
 
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    int A[n];
    inputarr(A,n);
    sort(A,A+n);
    vi ans;
    int cur=0;
    for (int i = 0; i < n; ++i)
    {
        cur+=A[i];
        if(cur==x&&i<n-1)
        {
            cur-=A[i];
            swap(A[i],A[i+1]);
            cur+=A[i];
        }
        ans.pb(A[i]);
    }
    if(cur==x)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(auto s:ans)
            cout<<s<<" ";
        cout<<endl;
    }
  
}

int main()
{

int t=1;

cin>>t;
while(t--)
    solve();
}