/*
There are 3 hidden numbers A,B,C.
You somehow found out the values of min(A,B),min(B,C), and min(C,A).
Determine whether there exists any tuple (A,B,C) that satisfies the given values of min(A,B),min(B,C),min(C,A).

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains 3 space-separated integers denoting the values of min(A,B),min(B,C), and min(C,A).

Output Format :
For each test case, output YES if there exists any valid tuple (A,B,C), and NO otherwise.
You can print each letter of the output in any case. For example YES, yes, yEs will all be considered equivalent.

Constraints :
1≤T≤1000
1≤min(A,B),min(B,C),min(C,A)≤10

Sample Input 1 :
3
5 5 5
2 3 4
2 2 4

Sample Output 1 :
YES
NO
YES

Explanation :
Test case 1: One valid tuple (A,B,C) is (5,5,5).

Test case 2: It can be shown that there is no valid tuple (A,B,C).

Test case 3: One valid tuple (A,B,C) is (4,2,5).
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int A_min = 0, B_min = 0, C_min = 0;
        cin >> A_min >> B_min >> C_min;
        
        if((A_min == B_min) && (B_min == C_min))
        {
            cout << "YES\n";
        }
        else if((A_min == B_min) && (A_min < C_min))
        {
            cout << "YES\n";
        }
        else if((B_min == C_min) && (B_min < A_min))
        {
            cout << "YES\n";
        }
        else if((C_min == A_min) && (C_min < B_min))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
	return 0;
}
