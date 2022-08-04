/*
You are given an integer N.
Find a permutation P=[P1,P2,…,PN] of the integers {1,2,…,N} such that sum of averages of all consecutive triplets is minimized, i.e.
∑i=1N−2Pi+Pi+1+Pi+23
is minimized.
If multiple permutations are possible, print any of them.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains an integer N, the size of the permutation.

Output Format :
For each test case, output on a new line a permutation which satisfies the above conditions.

Constraints :
1≤T≤1000
3≤N≤105
The sum of N over all test cases won't exceed 3⋅105.

Sample Input 1 :
2
4
3

Sample Output 1 :
3 2 1 4
3 2 1

Explanation :
Test case 1: The sum is P1+P2+P33+P2+P3+P43=3+2+13+2+1+43=6/3+7/3=4.333… 
Among all possible permutations of {1,2,3,4}, this is one of the permutations which provides the minimum result.

Test case 2: The sum is 3+2+13=6/3=2. Every permutation of size 3 will have this value, hence it is the minimum possible.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_int = 0;
        cin >> N_int;
        
        int i = 1, j = 2;
        if(N_int % 2)
        {
            int temp = N_int;
            for(int i = 0; i <= (N_int / 2); i++)
            {
                cout << temp << " ";
                temp -= 2;
            }
            temp = 2;
            for(int i = 0; i < (N_int / 2); i++)
            {
                cout << temp << " ";
                temp += 2;
            }
        }
        else
        {
            int temp = N_int;
            for(int i = 0; i < (N_int / 2); i++)
            {
                cout << temp << " ";
                temp -= 2;
            }
            temp = 1;
            for(int i = 0; i < (N_int / 2); i++)
            {
                cout << temp << " ";
                temp += 2;
            }
            cout << endl;
        }
    }
	return 0;
}
