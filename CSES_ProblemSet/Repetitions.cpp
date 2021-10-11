#include <bits/stdc++.h>
using namespace std;
 
void init()
{
	string s;
	cin >> s;
 
	int r = 0, cnt = 0;
 
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == s[i + 1]) {
			cnt++;
			r = max(r, cnt);
		} else{
			cnt = 0;
		}
		
 
	}
 
	cout << r + 1 << '\n';
}
int main()
{		 
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		 
	init();
		 
	return 0;
}