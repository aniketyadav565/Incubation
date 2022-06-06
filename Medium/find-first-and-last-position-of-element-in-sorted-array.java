/* Problem Statement :
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/

class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ar=new int[]{-1,-1};
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                ar[0]=i;
                for(int j=i;j<nums.length;j++){
                    if(nums[j]==target){
                        ar[1]=j;  
                    }
                    else{break;}
                }
                break;
            }
        }
        return ar;
    }
}