class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int val=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(val<nums[i])
                val = nums[i];
        }
        vector<int> fqe(val+1,0);
        for(int i=0;i<nums.size();i++){
            fqe[nums[i]]++;
        }
        
        vector<int> dp(val+1,0);
        dp[1] = fqe[1];
        for(int i=2;i<=val;i++){
            dp[i] = max(dp[i-2]+fqe[i]*i,dp[i-1]);
        }
        
        return dp[val];
    }
};
