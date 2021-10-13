#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string v;
    for (int i = 0; i < n; ++i)
    {
        v.push_back('(');
        v.push_back(')');
    }
    for (int i = 0; i < n; ++i)
    {
        cout<<v;
        cout<<endl;
        int j=0;
        for(; j<v.size(); j++)
        {
            if(v[j]==')')
                break;
        }
        for(; j<v.size()-1; j++)
        {
            v[j]=v[j+1];
        }
        v[2*n-1]=')';
    }
}
 
int main()
{

int t=1;
 
cin>>t;
while(t--)
    solve();
}