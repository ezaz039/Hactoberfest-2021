//Merge two sorted arrays without using extra space
/*
n: size of 1st array
m: size of 2nd array
eg.
Input: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
*/
#include <bits/stdc++.h> 
using namespace std; 

//Function to merge the arrays.
void merge(long long arr1[], long long arr2[], int n, int m) { 
    int i=0, j=0, k=n-1;
    while(i<=k && j<m){
        if(arr1[i]<arr2[j])
            i++;
        else{
            swap(arr2[j], arr1[k]);
            j++;k--;
        }
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
} 

int main() 
{ 
    //input two arrays (sorted)
    cout<<"Enter size of array1\n";
	int n, m;
    cin >> n;
    cout<<"\nEnter size of array2\n";
    cin >>m;
	
    long long arr1[n], arr2[m];

    cout<<"\nEnter "<<n<<" elements of array1\n";  
	for(int i = 0;i<n;i++){
	    cin >> arr1[i];
	}
    sort(arr1,arr1+n);

	cout<<"\nEnter "<<m<<" elements of array2\n";   
	for(int i = 0;i<m;i++){
	    cin >> arr2[i];
	}
    sort(arr2,arr2+m);

	//call function 
    merge(arr1, arr2, n, m); 

    //output
    cout<<"\nAfter Merging:\n";
    cout<<"\narray1 is-\n";
    for (int i = 0; i < n; i++) 
        cout<<arr1[i]<<" "; 
           
    cout<<"\narray2 is-\n";  
    for (int i = 0; i < m; i++) 
	    cout<<arr2[i]<<" "; 
	    
	cout<<endl;

	return 0; 
} 