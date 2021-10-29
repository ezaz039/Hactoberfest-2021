class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
         int[] merged=new int[nums1.length+nums2.length];
         for(int i=0;i<merged.length;i++){
             if(i<nums1.length)
             merged[i]=nums1[i];
             else
             merged[i]=nums2[i-nums1.length];    
         }
        Arrays.sort(merged);
        if(merged.length%2==1)
            return (double)merged[merged.length/2];
        else
            return (double)(merged[merged.length/2]+merged[merged.length/2-1])/2;
    }
}
