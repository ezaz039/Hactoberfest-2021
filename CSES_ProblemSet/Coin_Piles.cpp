#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a,b;
    cin >> a >> b;
    if (max(a, b) > 2 * min(a, b) && (!(a == b)))
    {
        cout << "NO";
        return;
    }
    if ((a + b) % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
}
 
int main()
{
    ll testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
        cout << endl;
    }
}
