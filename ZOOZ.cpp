/*
Kulyash believes in equality.
Given an integer N, output a binary string of length N such that:
The count of 01 subsequences in the string is equal to the count of 10 subsequences;
The string has at least one occurrence of 0 as well as 1.
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, an integer N - the length of the binary string.

Output Format :
For each test case, output any binary string of length N satisfying the given conditions.

Constraints :
1≤T≤100
3≤N≤1000

Subtasks :
Sample Input 1 :
2
4
3

Sample Output 1 :
1001
010

Explanation :
Test case 1: A binary string satisfying both the conditions is 1001. The count of 01 as well as 10 subsequences in the string is 2.

Test case 2: A binary string satisfying both the conditions is 010. The count of 01 as well as 10 subsequences in the string is 1.
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
        ll N_length = 0;
        cin >> N_length;
        
        string s1 = "1001", s2 = "010";
        if(N_length % 2 == 0)
        {
            cout << "1";
            for(int i = 1; i < N_length - 1; i++)
            {
                cout << "0";
            }
            
            cout << "1" << endl;
        }
        else
        {
            cout << "0";
            for(int i = 1; i < N_length - 1; i++)
            {
                cout << "1";
            }
            cout << "0\n";
        }
    }
	return 0;
}
