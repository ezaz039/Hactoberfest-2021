class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;
        int mid= (high+low)/2;
        while(low<=high){
            mid=(high+low)/2;
            if(nums[mid]==target)
                return mid; //if the target is present in the middle itself
            if(nums[mid]>target){
                high=mid-1; //if the target is smaller than the middle element, then it can only be there in the left subarray
            }
            else if(nums[mid]<target){
                low=mid+1; //if the target is greater than the middle element, then it can only be there in the right subarray
            }
        }
        return -1; //Target not found
    }
};
