#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int ans[n]={0};
	    for(int i=n-1;i>=0;i--)
	    {
	        if(i==n-1)
	            ans[i]=1;
	        else if(arr[i]<0 && arr[i+1]<0)
	            ans[i]=1;
	        else if(arr[i]>0 && arr[i+1]>0)
	            ans[i]=1;
	        else 
	            ans[i]=ans[i+1]+1;
	       
	    }
	    for(int i=0;i<n;i++)
	        cout<<ans[i]<<" ";
	        
	    cout<<endl;
	}
	return 0;
}
