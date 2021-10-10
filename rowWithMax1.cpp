Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input:
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

Example 2:

Input:
N = 2, M = 2
Arr[][] = {{0, 0}, {1, 1}}
Output: 1
Explanation: Row 1 contains 2 1's (0-based
indexing).




class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int count=0;
	    int ans=0;
	    int maxi = 0;
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j] == 1)
	            {
	                count++;
	            }
	        }
	        if(maxi < count)
	        {
	            maxi = count;
	            ans = i;
	        }
	    }
	    if(maxi == 0)
	    {
	        return -1;
	    }
	    return ans;
	}

};
