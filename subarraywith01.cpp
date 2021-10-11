class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        unordered_map<int,int> mpp;
        int sum=0;

        for(int i=0;i<n;i++)
        {
            sum += (arr[i] == 0) ? -1 : arr[i];
            mpp[sum]++;
        }

        int count=0;
        for(auto itr=mpp.begin();itr!=mpp.end();itr++)
        {
            if (itr->second > 1)
                count += ((itr->second * (itr->second - 1)) / 2);
        }

        if(mpp.find(0)!=mpp.end())
        {
            count+=mpp[0];
        }
        return count;
    }
};
