/*
Chef is eagerly waiting for a piece of information. His secret agent told him that this information would be revealed to him after KK weeks.
XX days have already passed and Chef is getting restless now. Find the number of remaining days Chef has to wait for, to get the information.
It is guaranteed that the information has not been revealed to the Chef yet.

Input Format :
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers KK and XX, as described in the problem statement.

Output Format :
For each test case, output the number of remaining days that Chef will have to wait for.

Constraints :
1 \leq T \leq 5001≤T≤500
1 \leq K \leq 101≤K≤10
1 \leq X \lt 7\cdot K1≤X<7⋅K

Sample 1:
Input :
4
1 5
1 6
1 1
1 2
Output :
2
1
6
5
Explanation:
Test case 11: The information will be revealed to the Chef after 11 week, which is equivalent to 77 days. 
Chef has already waited for 55 days, so he needs to wait for 22 more days in order to get the information.

Test case 22: The information will be revealed to the Chef after 11 week, which is equivalent to 77 days. 
Chef has already waited for 66 days, so he needs to wait for 11 more day in order to get the information.

Test case 33: The information will be revealed to the Chef after 11 week, which is equivalent to 77 days. 
Chef has already waited for 11 day, so he needs to wait for 66 more days in order to get the information.

Test case 44: The information will be revealed to the Chef after 11 week, which is equivalent to 77 days. 
Chef has already waited for 22 days, so he needs to wait for 55 more days in order to get the information.
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
        ll K_weeks = 0, X_days = 0;
        cin >> K_weeks >> X_days;
        
        cout << (K_weeks * 7) - X_days << endl;
    }
	return 0;
}
