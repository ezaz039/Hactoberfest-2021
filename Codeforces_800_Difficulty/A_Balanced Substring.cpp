#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==1)
        cout<<"-1 -1\n";
    else
    {
        for (int i = 1; i < s.size(); ++i)
        {
            if(s[i]!=s[i-1])
            {
                cout<<i<<" "<<i+1<<endl;
                return;
            }
        }
        cout<<-1<<" "<<-1<<endl;
    }
 
}
 
int main()
{

int t=1;
 
cin>>t;
while(t--)
    solve();
}