/*
There is a fair going on in Chefland. Chef wants to visit the fair along with his NN friends. 
Chef manages to collect KK passes for the fair. Will Chef be able to enter the fair with all his NN friends?
A person can enter the fair using one pass, and each pass can be used by only one person.

Input Format :
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line containing two space-separated integers N, KN,K.

Output Format :
For each test case, print on a new line YES if Chef will be able to enter the fair with all his NN friends and NO otherwise.
You may print each character of the string in either uppercase or lowercase (for example, 
the strings yEs, yes, Yes, and YES will all be treated as identical).

Constraints :
1 \leq T \leq 1001≤T≤100
1 \leq N, K \leq 1001≤N,K≤100

Sample 1:
Input :
4
5 8
6 3
2 2
1 2
Output :
YES
NO
NO
YES

Explanation:
Test case 11: Chef needs 55 passes for his friends and one pass for himself and he collected 88 passes. 
Thus he will be able to enter the fair with all his friends.

Test case 22: Chef needs 66 passes for his friends and one pass for himself while he collected only 33 passes. 
Thus he will not be able to enter the fair with all his friends, only three of them can enter the fair.

Test case 33: Chef needs 22 passes for his friends and one pass for himself while he collected only 22 passes. 
Thus either Chef or one of his friends can't enter the fair.

Test case 44: Chef needs a total of 22 passes, one for himself and one for his friend. He collected 22 passes. 
Thus he will be able to enter the fair with his friend.
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
        ll N_friends = 0, K_passes = 0;
        cin >> N_friends >> K_passes;
        
        if(K_passes >= N_friends + 1)
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
