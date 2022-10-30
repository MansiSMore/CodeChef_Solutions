/*
Chef has two integers A and B (A≤B).
Chef can choose any non-negative integer X and add them to both A and B. Find whether it is possible to make A a divisor of B.

Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two integers A and B.

Output Format:
For each test case, output YES if it is possible to make A a factor of B, NO otherwise.
You can print each character of the string in uppercase or lowercase. For example, the strings Yes, YES, yes, and yEs, are all considered identical.

Constraints:
1≤T≤105
1≤A≤B≤109

Sample Input 1 :
3
3 6
4 14
9 10

Sample Output 1 :
YES
YES
NO

Explanation :
Test case 1: We can choose X=0 and add them to 3 and 6. Thus, 3 is a factor of 6.

Test case 2: We can choose X=1 and add them to 4 and 14. Thus, 4+1=5 is a factor of 14+1=15.

Test case 3: There is no possible value of X to add such that A becomes a factor of B.
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
        ll A_int = 0, B_int = 0;
        cin >> A_int >> B_int;
        
        if(A_int == B_int)
        {
            cout << "YES\n";
        }
        else if(A_int <= B_int / 2)
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
