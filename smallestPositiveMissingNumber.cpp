You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.
Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
Explanation: Smallest positive missing
number is 2.




class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++)
        {
            if(arr[i] > 0)
            {
                mpp[arr[i]]++;
            }
        }

        for(int i=1;i<n;i++)
        {
            if(mpp.find(i) == mpp.end())
            {
                return i;
            }
        }
        if(arr[0] == 0)
        {
            return n;
        }
        else if(n==1 && arr[0] > 1){
            return 1;
        }
            return n+1;
    }
};
