#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    
    if(s[0][0]=='1'||s[1][n-1]=='1')
        cout<<"NO\n";
    else
    {
        for (int i = 1; i < n-1; ++i)
        {
            if(s[0][i]=='1'&&s[1][i]=='1')
            {
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
  
}
 
int main()
{

int t=1;
 
cin>>t;
while(t--)
    solve();
}