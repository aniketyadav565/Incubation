/* Problem Statement : 
https://leetcode.com/problems/median-of-two-sorted-arrays/
*/

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] ar=new int[nums1.length+nums2.length];
		//merging two arrays
        for(int i=0;i<nums1.length;i++)
        	ar[i]=nums1[i];
        for(int i=nums1.length,j=0;i<ar.length;i++,j++)
        	ar[i]=nums2[j];
		//sorting result array
        Arrays.sort(ar);

        if(ar.length%2!=0) {
        	return ar[ar.length/2];
        }
        else {
        	return (double)(ar[(ar.length/2)-1]+ar[(ar.length/2)])/2;
        }
    }
}