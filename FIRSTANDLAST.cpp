/*
You are given an array A=[A1,A2,…,AN] of length N.
You can right rotate it any number of times (possibly, zero). What is the maximum value of A1+AN you can get?
Note: Right rotating the array [A1,A2,…,AN] once gives the array [AN,A1,A2,…,AN−1]. 
For example, right rotating [1,2,3] once gives [3,1,2], and right rotating it again gives [2,3,1].

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
The first line of each test case contains a single integer N, denoting the length of array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN — denoting the array A.

Output Format :
For each test case, output on a new line the maximum value of A1+AN you can get after several right rotations.

Constraints :
1≤T≤1000
2≤N≤105
1≤Ai≤109
The sum of N across all test cases does not exceed 105

Sample Input 1 :
3
2
5 8
3
5 10 15
4
4 4 4 4

Sample Output 1 :
13
25
8

Explanation :
Test case 1: Whether you right rotate the array or not, you will always end up with A1+AN=13.

Test case 2: It is optimal to right rotate the array once after which the array becomes [15,5,10] with A1+AN=25.

Test case 3: No matter how much you right rotate the array, you will always obtain A1+AN=8.
*/

#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_elements = 0;
        cin >> N_elements;
        
        ll arr[N_elements], maxsum = 0;
        for(ll i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
        }
        maxsum = arr[0] + arr[N_elements - 1];
        for(ll i = 0; i < N_elements - 1; i++)
        {
            ll sum = arr[i] + arr[i + 1];
            if(maxsum < sum)
            {
                maxsum = sum;
            }
            //cout << maxsum << " " << sum << endl;
        }
        cout << maxsum << endl;
    }
	return 0;
}
