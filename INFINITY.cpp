/*
You are climbing an infinity staircase, which (as its name suggests) has an infinite number of steps. 
You are currently standing at the 1st step, and you would like to reach the N-th step. 
When standing at the i-th step, you can make one of the following three moves:
Move to step i+1
Move to step i+2
Move to step i+3
However, you can't make the same move twice in a row.
For example, suppose you reach the 7th step from the 4th step using the third move. 
Then, from the 7th step, you can move to either the 8th or the 9th step (using the 1st or 2nd move) — but you can't move to the 10th step 
(because you would use the third move twice in a row). Now suppose you choose the 1st move and move to the 8th step. 
On your next move, you cannot move to the 9th step, but you can move to either the 10th or the 11th step.
Under these conditions, find the minimum number of moves you need to reach the N-th step.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing one integer, N.

Output Format :
For each test case, print on a new line the minimum number of moves required to reach the N-th step.

Constraints :
1≤T≤105
1≤N≤109

Sample Input 1 :
5
2
3
5
1
7

Sample Output 1 :
1
1
2
0
3

Explanation :
Test case 1: Moving to the second step from the first takes only one move.

Test case 2: Moving to the third step from the first also takes only one move.

Test case 3: Moving to the fifth step can be done as follows: 1−→−+12−→−+35.

Test case 4: No moves need to be made.

Test case 5: Moving to the seventh step can be done as follows: 1−→−+12−→−+24−→−+37. Note that while the sequence 1−→−+34−→−+37 reaches it in two moves, 
it is not a valid sequence since the same move is made twice in a row.
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
        ll N_stairs = 0;
        cin >> N_stairs;
        
        ll minimum_moves = (N_stairs / 5) * 2;
        if(N_stairs % 5 == 1 || N_stairs % 5 == 0)
        {
            
        }
        else
        {
            minimum_moves++;
        }
        
        cout << minimum_moves << endl;
        
    }
	return 0;
}
