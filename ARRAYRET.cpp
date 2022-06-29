/*
Chef has an array A of length N.
Let f(i) denote the sum A1+A2+⋯+Ai and let g(i) denote the sum Ai+Ai+1+⋯+AN.
Chef creates another array B of length N such that Bi=f(i)+g(i) for all 1≤i≤N.
Now, Chef has lost the original array A and needs your help to recover it, given array B. 
It is guaranteed that Chef has obtained the array B from a valid array A.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the size of the array A.
The second line of each test case contains N space-separated integers B1,B2,…,BN denoting the array B.

Output Format :
For each testcase, output N space separated integers A1,A2,…,AN denoting the array A.
Note that 1≤Ai≤105 must hold for all 1≤i≤N and it is guaranteed that a valid array A that meets these constraints exists.
If there are multiple answers, output any.

Constraints :
1≤T≤1000
1≤N≤105
1≤Bi≤2⋅1010
Th sum of N over all test cases does not exceed 105.
1≤Ai≤105
It is guaranteed that a valid array A always exists.

Sample Input 1 :
4
1
6
3
7 8 9
4
13 15 13 14
2
25 20

Sample Output 1 :
3 
1 2 3 
2 4 2 3 
10 5 

Explanation :
Test case 1: For A=[3], B=[6]. B1=f(1)+g(1)=3+3=6.

Test case 2: For A=[1,2,3], B=[7,8,9].
B1=f(1)+g(1)=1⎯⎯+1+2+3⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯=7
B2=f(2)+g(2)=1+2⎯⎯⎯⎯⎯⎯⎯⎯⎯+2+3⎯⎯⎯⎯⎯⎯⎯⎯⎯=8 
B3=f(3)+g(3)=1+2+3⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯+3⎯⎯=9
*/
#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_length = 0;
        cin >> N_length;
        
        ll brr[N_length], sum_arr = 0;
        for(int i = 0; i < N_length; i++)
        {
            cin >> brr[i];
            sum_arr += brr[i];
        }
        
        sum_arr /= (N_length + 1);
        for(int i = 0; i < N_length; i++)
        {
            cout << brr[i] - sum_arr << " ";
        }
        cout << endl;
    
    }
        
	return 0;
}
