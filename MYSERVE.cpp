/*
Alice and Bob are playing a game of table tennis where irrespective of the point scored, 
every player makes 2 consecutive serves before the service changes. Alice makes the first serve of the match. 
Therefore the first 2 serves will be made by Alice, then the next 2 serves will be made by Bob and so on.
Let's consider the following example match for more clarity:
Alice makes the 1st serve.
Let us assume, Bob wins this point. (Score is 0 for Alice and 1 for Bob)
Alice makes the 2nd serve.
Let us assume, Alice wins this point. (Score is 1 for Alice and 1 for Bob)
Bob makes the 3rd serve.
Let us assume, Alice wins this point. (Score is 2 for Alice and 1 for Bob)
Bob makes the 4th serve.
Let us assume, Alice wins this point. (Score is 3 for Alice and 1 for Bob)
Alice makes the 5th serve.
And the game continues …
After the score reaches P and Q for Alice and Bob respectively, both the players forgot whose serve it is. Help them determine whose service it is.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains two integers P and Q — the score of Alice and Bob respectively.

Output Format :
For each test case, determine which player's (Alice or Bob) serve it is.
You may print each character of Alice and Bob in uppercase or lowercase (for example, Bob, BOB, boB will be considered identical).

Constraints :
1≤T≤200
0≤P,Q≤10

Sample Input 1 :
4
0 0
0 2
2 2
4 7

Sample Output 1 :
Alice
Bob
Alice
Bob

Explanation :
Test Case 1: Since no points have been scored yet, this is the first serve of the match. Alice makes the 1st serve of the match.
Test Case 2: Two points have been scored yet. Thus, it is the third serve of the match. Bob makes the 3rd serve of the match.
Test Case 3: Four points have been scored yet. Thus, it is the fifth serve of the match. Alice makes the 5th serve of the match.
Test Case 4: Eleven points have been scored yet. Thus, it is the twelfth serve of the match. Bob makes the 12th serve of the match.
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
        ll P_alice = 0, Q_bob = 0;
        cin >> P_alice >> Q_bob;
        
        ll sum = P_alice + Q_bob + 1;

        ll pp, qq;
        for(pp = 1; pp <= sum; pp += 4)
        {
            if(pp >= sum || pp + 1 >= sum)
            {
                break;
            }
            //cout << pp << endl;
        }
        
        for(qq = 3; qq <= sum; qq += 4)
        {
            if(qq >= sum || qq + 1 >= sum)
            {
                break;
            }
            //cout << qq << endl;
        }
        if(pp == sum || pp + 1 == sum)
            cout << "Alice" << endl;
        else
            cout << "BOb\n";
    }
	return 0;
}
