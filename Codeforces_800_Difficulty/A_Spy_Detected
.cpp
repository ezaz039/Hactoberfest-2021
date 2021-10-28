#include <bits/stdc++.h>
  
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int A[n],rep;
    for (int i = 0; i < n; ++i)
    {
        cin>>A[i];
    }
    if(A[0]==A[1])
        rep=A[0];
    else if(A[1]==A[2])
        rep = A[1];
    else if(A[0]==A[2])
        rep=A[0];
    for (int i = 0; i < n; ++i)
    {
        if(A[i]!=rep){
            cout<<i+1<<endl;
            return;
        }
    }
  
}

int main()
{

int t=1;

cin>>t;
while(t--)
    solve();
}