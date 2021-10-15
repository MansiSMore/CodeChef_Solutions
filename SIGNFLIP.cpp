/*
Chef has an array A containing N integers. The integers of the array can be positive, negative, or even zero.
Chef allows you to choose at most K elements of the array and multiply them by −1.
Find the maximum sum of a subsequence you can obtain if you choose the elements of the subsequence optimally.
Note: A sequence a is a subsequence of a sequence b if a can be obtained from b by deletion of several (possibly, zero or all) elements. 
For example, [3,1] is a subsequence of [3,2,1] and [4,3,1], but not a subsequence of [1,3,3,7] and [3,10,4]. Note that empty sequence is also a subsequence.

Input Format :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N,K.
The second line of each test case contains N space-separated integers A1,A2,...,AN

Output Format :
For each test case, print a single line containing one integer - the maximum sum of a subsequence you can obtain.

Constraints :
1≤T≤15
1≤N≤105
0≤K≤N
−104≤Ai≤104
Sum of N over all test cases does not exceed 106

Sample Input 1 :
3
6 2
6 -10 -1 0 -4 2
5 0
-1 -1 -1 -1 -1
3 3
1 2 3

Sample Output 1 :
22
0
6

Explanation :
Test case 1: It is optimal to multiply −10,−4 with −1 and then take the subsequence [6,10,4,2].
Test case 2: It is optimal to choose empty subsequence with a sum equal to 0.
Test case 3: We can take subsequence [1,2,3]. Here, we do not multiply −1 with any element.

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int T = 0;
	cin >> T;
	
	while(T--)
	{
	    int N = 0, K = 0, sum = 0;
	    
	    cin >> N >> K;
	    
	    int arr[N];
	    
	    for(int i = 0; i < N; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    sort(arr, arr + N);
	    
	    for(int i = 0; i < K; i++)
	    {
	        if(arr[i] >= 0)
	            break;
	        arr[i] *= -1;
	    }
	    
	    for(int i = 0; i < N; i++)
	    {
	        if(arr[i] > 0)
	            sum += arr[i];
	    }
	    
	    cout << sum <<endl;
	}
	return 0;
}
