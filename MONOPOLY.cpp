/*
Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.
There are exactly 3 companies in the market each of whose revenues are denoted by R1, R2 and R3 respectively. 
A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.
Given the revenue of the 3 companies, help Chef determine if any of them has a monopolistic advantage.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing three space separated integers R1, 
R2 and R3 denoting the revenue of the three companies respectively.

Output Format :
For each test case, output 𝚈𝙴𝚂 if any of the companies has a monopolistic advantage over its competitors, else output 𝙽𝙾.
You may print each character of the string in uppercase or lowercase (for example, the strings 𝚈𝚎𝚂, 𝚢𝙴𝚜, 𝚢𝚎𝚜 and 𝚈𝙴𝚂 will all be treated as identical).

Constraints :
1≤T≤1000
1≤R1,R2,R3≤10

Sample Input 1 :
4
1 1 1
1 2 4
2 10 3
1 2 3

Sample Output 1 :
No
Yes
Yes
No

Explanation :
Test case 1: All the companies have equal revenue so none have a monopolistic advantage.

Test case 2: The third company has a monopolistic advantage as 1+2<4.

Test case 3: The second company has a monopolistic advantage as 2+3<10.
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
        ll R1 = 0, R2 = 0, R3 = 0;
        cin >> R1 >> R2 >> R3;
        
        if(R1 + R2 < R3 || R1 + R3 < R2 || R2 + R3 < R1)
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
