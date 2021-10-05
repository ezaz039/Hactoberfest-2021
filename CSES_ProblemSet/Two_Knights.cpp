#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << 0 << endl;
        cout << 6 << endl;
        return 0;
    }
    if (n == 3)
    {
        cout << 0 << endl;
        cout << 6 << endl;
        cout << 28 << endl;
        return 0;
    }
    cout << 0 << endl;
    cout << 6 << endl;
    cout << 28 << endl;
    for (ll i = 4; i <= n; i++)
    {
        ll count = 0;
        count += (((4 * (i - 4))) * (i - 2)) + (2 * (i - 4));
        count += ((i - 2) * 6) + 2;
        count += ((i - 2) * 4) + 2;
        ll j = i * i;
        cout << (j * (j - 1) / 2) - count << endl;
    }
}
