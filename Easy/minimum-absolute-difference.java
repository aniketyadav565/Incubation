/* Problem Statement :
https://leetcode.com/problems/minimum-absolute-difference/submissions/
*/

class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
		Arrays.sort(arr);
        int min=Integer.MAX_VALUE;
        for (int i = 1; i < arr.length; i++) {  //minimum differance
			if ((arr[i] - arr[i-1])<min)min=(arr[i] - arr[i-1]);
		}
		List<List<Integer>> result = new ArrayList<List<Integer>>();
		for (int i = 1; i < arr.length; i++) {
			if (arr[i] - arr[i-1] == min) {
				List<Integer> l = new ArrayList();
				l.add(arr[i-1]);
				l.add(arr[i]);
				result.add(l);
			}
		}

        return result;
    }
}