#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]!='0')
            ans+=(s[i]-'0')+1;
        
    }
    if(s[n-1]!='0')
        ans--;
    cout<<ans<<endl;
}
 
int main()
{

int t=1;
 
cin>>t;
while(t--)
    solve();
}