class Solution {
public:
    void swap_no(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
        return;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int g_idx = -1;
        int g_val = INT_MAX;
        
        for(int i = n-2; i >= 0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                for(int j = i+1; j < n; j++)
                {
                    if(nums[j] > nums[i] && nums[j] < g_val)
                    {
                        g_idx = j;
                    }
                }
                // swap i and g_idx
                swap_no(nums[i], nums[g_idx]);
                
                //sort the rest
                vector<int>::iterator it = nums.begin();
                advance(it, i+1);
                sort(it, nums.end());
                return;
            }
        }
        sort(nums.begin(), nums.end());
        return;
    }
};
