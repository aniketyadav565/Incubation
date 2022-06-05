/* Problem Statement :
https://leetcode.com/problems/length-of-last-word/submissions/
*/

class Solution {
    public int lengthOfLastWord(String s) {
        s.trim();
        String []ar=s.split(" ");
		return ar[ar.length-1].length();
    }
}