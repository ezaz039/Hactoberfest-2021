#include<iostream>
using namespace std;


/* Given an array, where every element appears twice expect for one.
   We need to find that single one 
*/


int main(){

    int n;
    cout<<"Enter the size of the array(odd number): ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements of the array where each element appears twice expect for one: ";

    // Eg: arr[5]={2,2,4,5,5} 

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    /* 'a xor a = 0'  */

    int singleNumber = arr[0];

    for(int i=1;i<n;i++){
        singleNumber^=arr[i];
    }

    cout<<"The element which appears once: "<<singleNumber<<"\n";

    
    
}
