/*
Chef calls a number lucky if it contains the digit 77 at least once.
Given a number XX, determine if it is a lucky number or not.

Input Format :
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer XX — the number mentioned in the problem statement.

Output Format :
For each test case, output YES if XX is a lucky number. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1 \leq T \leq 10001≤T≤1000
1 \le X \le 10^91≤X≤10 
9
 
Sample 1:
Input :
4
6
478
2090
77777
Output :
NO
YES
NO
YES

Explanation:
Test Case 1: The number 66 is not lucky since it does not contain the digit 77.
Test Case 2: The number 478478 is lucky since it contains the digit 77 at least once.
Test Case 3: The number 20902090 is not lucky since it does not contain the digit 77.
Test Case 4: The number 7777777777 is lucky since it contains the digit 77 at least once.
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
        ll X_lucky_num = 0;
        cin >> X_lucky_num;
        
        while(X_lucky_num != 0)
        {
            if((X_lucky_num % 10) == 7)
            {
                cout << "YES\n";
                break;
            }
            X_lucky_num /= 10;
        }
        if(X_lucky_num == 0)
        {
            cout << "NO\n";
        }
        
    }
	return 0;
}
