#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long n,s;
    cin>>n>>s;
    long long a=n-n/2+(1-n%2);
    cout<<s/a<<endl;
 
}
 
int main()
{

int t=1;
 
cin>>t;
while(t--)
    solve();
}