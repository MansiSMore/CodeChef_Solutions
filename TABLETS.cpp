/*
The doctor prescribed Chef to take a multivitamin tablet 33 times a day for the next XX days.
Chef already has YY multivitamin tablets.
Determine if Chef has enough tablets for these XX days or not.

Input Format :
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers XX and YY — 
the number of days Chef needs to take tablets and the number of tablets Chef already has.

Output Format :
For each test case, output YES if Chef has enough tablets for these XX days. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1 \leq T \leq 20001≤T≤2000
1 \le X \le 1001≤X≤100
0 \le Y \le 10000≤Y≤1000

Input :
4
1 10
12 0
10 29
10 30

Output :
YES
NO
NO
YES

Explanation:
Test Case 1: Since Chef did not roll a 66, he can not enter a new token in the play.
Test Case 2: Since Chef rolled a 66, he can enter a new token in the play.
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
        ll X_days_given = 0, Y_multi_tabs = 0;
        cin >> X_days_given >> Y_multi_tabs;
        
        if(X_days_given * 3 <= Y_multi_tabs)
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
