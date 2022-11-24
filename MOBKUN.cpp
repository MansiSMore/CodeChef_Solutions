/*
The followers of Psycho-Helmet religion follow a peculiar calendar – a normal year contains N days. 
Every K-th year is a “MOB” year. For example, if K=4, then years 4,8,12,16… are “MOB” years. 
A “MOB” year contains M additional days i.e. it contains N+M days.
Given X, determine whether the day after (X−1) days from Day 1 of Year 1 falls in a “MOB” year.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing N, M, K and X — the number of days in a normal year, 
the number of days in a “MOB” year, the number of years between two “MOB” years and the integer X.

Output Format :
For each test case, output YES on a new line if the day after (X−1) days from Year 1, Day 1 falls in a “MOB” year, and NO otherwise.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1≤T≤105
1≤N,M,K≤104
1≤X≤109

Sample Input 1 :
3
2 1 4 17
3 7 5 50
3 7 5 61

Sample Output 1 :
YES
NO
YES

Explanation :
Test case 1: Since N=2, M=1 and K=4, years 4,8,12,16… are “MOB” years and:
Year 1 has N=2 days.
Year 2 has N=2 days.
Year 3 has N=2 days.
Year 4 is a “MOB” year and has N+M=3 days.
Year 5 has N=2 days.
Year 6 has N=2 days.
Year 7 has N=2 days.
Year 8 is a “MOB” year and has N+M=3 days.
The X=17-th day falls on the second day of Year 8, which is a “MOB” year. Hence the answer is YES.

Test case 2: The X=50-th day falls on the third day of Year 12, which is not a “MOB” year. Hence the answer is NO.

Test case 3: The X=61-st day falls on the fifth day of Year 15, which is a “MOB” year. Hence the answer is YES.
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
        ll N = 0, M = 0, K = 0, X = 0;
        cin >> N >> M >> K >> X;
        X--;
        if(X % (K * N + M) >= (K - 1) * N)
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
