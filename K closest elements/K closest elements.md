Given a sorted array, arr[] of N integers, and a value X. Find the K closest elements to X in arr[].
Keep the following points in mind:

If X is present in the array, then it need not be considered.
If there are two elements with the same difference with X, the greater element is given priority.
If sufficient elements are not present on the right side then take elements from left and vice versa.
 
Example 1:

Input:
N = 13
arr[] = {12, 16, 22, 30, 35, 39, 42, 
         45, 48, 50, 53, 55, 56}
K = 4, X = 35
Output: 39 30 42 45
Explanation: 
First closest element to 35 is 39.
Second closest element to 35 is 30.
Third closest element to 35 is 42.
And fourth closest element to 35 is 45.

Example 2:

Input:
N = 5
Arr[] = {1, 2, 3, 6, 10}
K = 3, X = 4
Output: 3 6 2
Explanation: 
First closest element is 3.
There are two elements 2 and 6 for which 
the difference with 4 is same i.e. 2.
So first take greatest number 6 
then the lower number 2.

Your Task:
You don't need to read input or print anything. Complete the function printKClosest() which takes arr[], n, k and x as input parameters and returns an array of integers containing the K closest elements to X in arr[].


Expected Time Complexity: O(logN + K)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 105
1 ≤ K ≤ N
1 ≤ X ≤ 106
1 ≤ Arr[i] ≤ 106
