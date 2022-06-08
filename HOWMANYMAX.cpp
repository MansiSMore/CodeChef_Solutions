/*
From an array A containing N integers, you construct a binary string S of length (N−1) as follows. For all 1≤i<N:
If Ai<Ai+1, then Si=0.
If Ai>Ai+1, then Si=1.
Given the string S, determine the count of indices i (1≤i≤N) such that it is possible for Ai to be the maximum element of the array A.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the size of the array A.
The second line of each test case contains the binary string S of length (N−1) containing 0s and 1s only.

Output Format :
For each test case, output the count of indices i (1≤i≤N) such that it is possible for Ai to be the maximum element of the array A.

Constraints :
1≤T≤105
2≤N≤105
Sum of N over all test cases does not exceed 105.

Sample Input 1 :
3
2
0
7
000111
6
11100

Sample Output 1 :
1
1
2

Explanation :
Test case 1: Here A1<A2. Therefore clearly only A2 can be the maximum element of A.

Test case 2: Here A1<A2, A2<A3, A3<A4, A4>A5, A5>A6 and A6>A7. Therefore, clearly only A4 can be the maximum element of A.

Test case 3: Here A1>A2, A2>A3, A3>A4, A4<A5 and A5<A6. Therefore A1 and A6 both can be the maximum elements of A.
*/

#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    while(T_testcases--)
    {
        ll N_numbers = 0, cnt = 0;
        cin >> N_numbers;
        vector<char> A_array(N_numbers - 1);
        for(ll i = 0; i < N_numbers - 1; i++)
        {
            cin >> A_array[i];
        }
        
        for(ll i = 1; i < N_numbers - 1; i++)
        {
            if((A_array[i] == '1') && (A_array[i-1] == '0'))
            {
                 cnt++;
            }
        }
        
        if(A_array[0] == '1')
        {  
            cnt++;
        }
        if(A_array[A_array.size() - 1] == '0')
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
