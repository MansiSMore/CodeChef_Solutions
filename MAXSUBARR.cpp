/*
Given two arrays A and B of sizes N and M respectively. You can apply the following operation until the array B is non-empty:
Choose either the first or the last element of array B.
Insert the chosen element to either the front or the back of array A.
Delete the chosen element from array B.
For example, let A=[9,7] and B=[1,3,2]. In one operation, we can choose either X=1 or X=2 (first or last element of array B). 
We can insert X in array A and make it either A=[X,9,7] or A=[9,7,X]. The chosen X is deleted from array B. 
Thus, it will become either B=[3,2] (when chosen X is 1) or B=[1,3] (when chosen X is 2).
Find the maximum sum of any subarray of the array A that you can achieve after performing exactly M operations.
Note: A subarray of an array is formed by deleting some (possibly zero) elements from the beginning of the array and some 
(possible zero) elements from the end of the array. A subarray can be empty as well.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 4 lines of input.
The first line of each test contains a single integer N, the size of array A.
The next line contains N space-separated integers, denoting elements of array A.
The third line of each test contains a single integer M, the size of array B.
The next line contains M space-separated integers, denoting elements of array B.

Output Format :
For each test case, output on a new line the maximum sum of any subarray of the array A that you can achieve after performing exactly M operations.

Constraints :
1≤T≤10
1≤N≤105
1≤M≤105
−108≤Ai,Bi≤108

Sample Input 1 :
3
5
3 26 -79 72 23
2
66 44
1
81
1
-97
5
10 -5 14 -20 4
3
-10 5 -2

Sample Output 1 :
205
81
24

Explanation :
Test case 1:
Operation 1: Add the first element of array B to the back of array A. Thus, A=[3,26,−79,72,23,66] and B=[44].
Operation 2: Add the first element of array B to the back of array A. Thus, A=[3,26,−79,72,23,66,44] and B=[].
The, maximum sum subarray of array A is [72,23,66,44] having sum 72+23+66+44=205.

Test case 2:
Operation 1: Add the first element of array B to the front of array A. Thus, A=[−97,81] and B=[].
The, maximum sum subarray of array A is [81] having sum 81.

Test case 3:
Operation 1: Add the last element of array B to the back of array A. Thus, A=[10,−5,14,−20,4,−2] and B=[−10,5].
Operation 2: Add the last element of array B to the front of array A. Thus, A=[5,10,−5,14,−20,4,−2] and B=[−10].
Operation 3: Add the first element of array B to the front of array A. Thus, A=[−10,5,10,−5,14,−20,4,−2] and B=[].
The, maximum sum subarray of array A is [5,10,−5,14] having sum 5+10−5+14=24.
*/

#include <iostream>
using namespace std;
#include <vector>

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_length = 0;
        cin >> N_length;
        
        ll sum = 0;
        ll arr[N_length] = {0};
        for(int i = 0; i < N_length; i++)
        {
            cin >> arr[i];
            //sum += arr[i];
        }
        
        ll M_length = 0;
        cin >> M_length;
        
        vector<ll> brr;
        for(int i = 0; i < M_length; i++)
        {
            ll temp;
            cin >> temp;
            brr.push_back(temp);
        }
        
        ll leftsum = 0, rightsum = 0, sum1 = 0, sum2 = 0;
        for(int i = 0; i < N_length; i++)
        {
            sum1 += arr[i];
            sum = max(sum, sum1);
        }
        
        
        for(int i = N_length - 1; i >= 0; i--)
        {
            sum2 += arr[i];
            sum = max(sum, sum2);
        }


        while(brr.size() != 0)
        {
            if(brr.back() >= 0)
            {
                sum += brr.back();
                
            }
            brr.pop_back();
        }
        
        cout << sum << endl;
    }
	return 0;
}
