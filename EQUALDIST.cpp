/*
Alice and Bob are very good friends and they always distribute all the eatables equally among themselves.
Alice has A chocolates and Bob has B chocolates. Determine whether Alice and Bob can distribute all the chocolates equally among themselves.

Note that:
It is not allowed to break a chocolate into more than one piece.
No chocolate shall be left in the distribution.

Input Format :
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers A and B, the number of chocolates that Alice and Bob have, respectively.

Output Format :
For each test case, output on a new line 𝚈𝙴𝚂 if Alice and Bob can distribute all the chocolates equally, else output 𝙽𝙾. 
The output is case insensitive, i.e, 𝚢𝚎𝚜, 𝚈𝚎𝚂, 𝚢𝙴𝚂 will all be accepted as correct answers when Alice and Bob can distribute the chocolates equally.

Constraints :
1≤T≤1000
1≤A,B≤105

Sample Input 1 :
4
1 1
1 3
1 2
1 4

Sample Output 1 :
YES
YES
NO
NO

Explanation :
Test case 1: Both Alice and Bob already have equal number of chocolates, hence it is possible to distribute the chocolates equally among Alice and Bob.

Test case 2: If Bob gives one of his chocolates to Alice, then both of them will have equal number of chocolates, i.e. 2. 
So, it is possible to distribute the chocolates equally among Alice and Bob.

Test case 3: There are total 3 chocolates. These chocolates cannot be divided equally among Alice and Bob.

Test case 4: Alice and Bob cannot have equal number of chocolates, no matter how they distribute the chocolates.
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
        ll A_alice = 0, B_bob = 0;
        cin >> A_alice >> B_bob;
        
        if((A_alice + B_bob) % 2 == 0)
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
