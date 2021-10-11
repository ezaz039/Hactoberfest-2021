 //Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively. You must solve this problem without using the library's sort function.


// Example 1:
//
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

//Dutch national flag algorithm is used.
//To get to know more about the algorithm please refer this : https://users.monash.edu/~lloyd/tildeAlgDS/Sort/Flag/

//Below is the CPP solution for the problem.

class Solution {
public:
    int i,temp=0;
    void sortColors(vector<int>& nums) {
        int mid=0;
        int low=0;
        int high=nums.size()-1;
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }

};
