#include <bits/stdc++.h>
using namespace std;
 
void init()
{
	int n;
	cin >> n;
	int a[n];
 
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long int sum = 0, prev = 0;
 
	for(int i = 0; i < n; i++) {
		
		if(prev > a[i]) {
			sum += prev - a[i];
		} 
		else {
			prev = a[i];
		}
	}
	
	cout << sum << '\n';
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