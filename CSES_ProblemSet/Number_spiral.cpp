#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pb push_back
#define fi first
#define se second
#define M 1000000007
using namespace std;
void solve()
{
    ll row,col;
    cin>>row>>col;
    if(row>col)
    {
        ll num = row*row - row + 1;
        if(row%2==0)
        {
            cout<< num + (row-col) <<endl;
        }
        else
        {
            cout<< num - (row-col) <<endl;
        }
    }
    else
    {
        ll num = col*col - col + 1;
        if(col%2==0)
        {
            cout<< num - (col-row) << endl;
        }
        else
        {
            cout<< num + (col-row) << endl;
        }
    }
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // ll t = 1;
    ll t;
    cin >> t;
    while (t--)
        solve();
}