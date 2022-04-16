/*
You are given an array A containing N positive integers. Find the number of pairs (i,j) such that 1≤i<j≤N and:
Ai+Aj≥Ai⋅Aj

Input Format :
The first line contains an integer T denoting the number of test cases. The T test cases then follow.
The first line of each test case contains an integer N.
The second line of each test case contains N space-separated integers A1,A2,…,AN.

Output Format :
For each test case, output on a new line the required answer.

Constraints :
1≤T≤1000
2≤N≤2⋅105
1≤Ai≤106
Sum of N over all cases won't exceed 2⋅105

Sample Input 1 :
2
3
1 3 4
5
2 3 4 5 6

Sample Output 1 :
2
0

Explanation :
Test case 1: The two pairs are (1,2) and (1,3), because:
A1+A2=4>3=A1⋅A2
A1+A3=5>4=A1⋅A3

Test case 2: No pairs satisfy the condition.
*/

#include <iostream>
using namespace std;

int main() 
{
    long T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        long long N_no_of_elements = 0, cnt_ones = 1, cnt_twos = 0;
        cin >> N_no_of_elements;
        
        long long arr[N_no_of_elements];
        for(int i = 0; i < N_no_of_elements; i++)
        {
            cin >> arr[i];
        }
        
        long long cnt_no_of_pairs = 0;
        for(int i = 0; i < N_no_of_elements; i++)
        {
            if(arr[i] == 1)
            {
                cnt_no_of_pairs += N_no_of_elements - cnt_ones;
                cnt_ones++;
            }
            else if(arr[i] == 2)
            {
                cnt_no_of_pairs += cnt_twos;
                cnt_twos++;
            }
        }
        
        cout << cnt_no_of_pairs << endl;
    }
	return 0;
}
