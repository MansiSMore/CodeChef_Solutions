/*
Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 66 on the die.
In the current turn, Chef rolled the number XX on the die. Determine if Chef can enter a new token into the play in the current turn or not.

Input Format :
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer XX — the number rolled by the Chef on the die.

Output Format :
For each test case, output YES if the Chef can enter a new token in the game. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1 \le T \le 61≤T≤6
1 \le X \le 61≤X≤6

Sample 1:
Input
3
1
6
3

Output
NO
YES
NO

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
        ll X_dice_number = 0;
        cin >> X_dice_number;
        
        if(X_dice_number == 6)
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
