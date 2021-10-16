#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(b,c)-a+1,0ll)<<" "<<max(max(a,c)-b+1,0ll)<<" "<<max(max(a,b)-c+1,0ll)<<endl;
}
 
int main()
{

int t=1;
 
cin>>t;
while(t--)
    solve();
}