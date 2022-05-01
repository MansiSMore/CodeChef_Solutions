/*
A football league of N teams is taking place, where each team plays other teams once in single round robin fashion. 
A team gets 3 points for winning a game and 0 for losing (assume that no games end in a draw/tie). 
What is the maximum possible difference of points between the winning team and the second-placed team?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing a single integer N.
Output Format
For each test case, output in a single line the maximum difference of points between first and second place.

Constraints :
1≤T≤105
2≤N≤109

Sample Input 1 :
4
2
3
4
9

Sample Output 1 :
3
3
6
12

Explanation :
Test case 1: There will only be one match played between the two teams, therefore one team wins by 3 points.

Test case 2: Let the three teams be A, B, C. If team A wins both the games against team B and team C, 
then team A will win by 3 points since one of team B and team C will win the game between them.

Test case 3: Let the four teams be A, B, C, D. One possibility is for A to win all its games, and then B beats C, 
C beats D, D beats B. This way, the winner has 9 points and second place has 3 points, making a difference of 6.

Test case 4: It can be shown that it's not possible to achieve a difference higher than 12 when 9 teams play. 
One way of achieving this is for the winner to score 24 points and second place to score 12.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        long long N_teams = 0;
        cin >> N_teams;
        
        cout << (N_teams / 2) * 3 << endl;
    }
	return 0;
}
