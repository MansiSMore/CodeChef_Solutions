/*
Given a positive integer N, find an array A=[A1,A2,…,AN] of length N consisting of distinct integers from 1 to 109, 
such that the following condition is satisfied for each subarray [AL,AL+1,…,Ar] (1≤L≤R≤N):
The sum of elements in the subarray is divisible by its length i.e. AL+AL+1+…+AR is divisible by R−L+1.
It can be proved that such an array always exists under given constraints.
If there are multiple possible arrays, you may print any of them.

Input Format :
The first line of the input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line containing one positive integer N, the length of the array A.

Output Format :
For each test case, print one line containing N space-separated integers, the contents of the array A.

Constraints :
1≤T≤100
1≤N≤1000
Sum of N over all test cases doesn't exceed 5000

Sample Input 1 :
3
1
2
3

Sample Output 1 :
1
1 3
4 2 6

Explanation :
Test case 1:
For array A=[1],
The sum of elements of the subarray [1] is equal to 1 which is divisible by 1, the length of this subarray.

Test case 2:
For array A=[1,3],
The sum of elements of the subarray [1] is equal to 1 which is divisible by 1, the length of this subarray.
The sum of elements of the subarray [3] is equal to 3 which is divisible by 1, the length of this subarray.
The sum of elements of the subarray [1,3] is equal to 4 which is divisible by 2, the length of this subarray.

Test case 3:
For array A=[4,2,6],
The sum of elements of the subarray [4] is equal to 4 which is divisible by 1, the length of this subarray.
The sum of elements of the subarray [2] is equal to 2 which is divisible by 1, the length of this subarray.
The sum of elements of the subarray [6] is equal to 6 which is divisible by 1, the length of this subarray.
The sum of elements of the subarray [4,2] is equal to 6 which is divisible by 2, the length of this subarray.
The sum of elements of the subarray [2,6] is equal to 8 which is divisible by 2, the length of this subarray.
The sum of elements of the subarray [4,2,6] is equal to 12 which is divisible by 3, the length of this subarray.

*/

#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0;
        cin >> N;
        
        int i = 1;
        while(N--)
        {
            cout << i << " ";
            i += 2;
        }
        cout << endl;
    }
	return 0;
}
