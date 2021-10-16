#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s,str;
    cin>>s;
    int n=s.size(),cnt=0;
    for (int i = 0; i < n;)
    {
        
        char ch=s[i];
        str+=ch;
        while(i<n&&s[i]==ch)
        {
            i++;
        }
        
    }
    
    for (int i = 0; i < str.size(); ++i)
    {
        if(str[i]=='0')
            cnt++;
    }
    cout<<min(cnt,2)<<endl;
 
}
 
int main()
{

int t=1;
 
cin>>t;
while(t--)
    solve();
}