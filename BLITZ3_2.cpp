/*
In a Chess match "a + b", each player has a clock which shows a minutes at the start and whenever a player makes a move, b seconds are added to this player's clock. 
Time on a player's clock decreases during that player's turns and remains unchanged during the other player's turns. 
If the time on some player's clock hits zero (but not only in this case), this player loses the game.
There's a 3 + 2 blitz chess match. 
After N turns (i.e. ⌊N+12⌋ moves made by white and ⌊N2⌋ moves made by black), the game ends and the clocks of the two players stop; 
they show that the players (white and black) have A and B seconds left respectively. Note that after the N-th turn, 
b=2 seconds are still added to the clock of the player that made the last move and then the game ends.
Find the total duration of the game, i.e. the number of seconds that have elapsed from the start of the game until the end.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers N, A and B.

Output :
For each test case, print a single line containing one integer — the duration of the game.

Constraints :
1≤T≤105
10≤N≤100
0≤A≤180+2⋅⌊N+12⌋
0≤B≤180+2⋅⌊N2⌋
for N odd, A≥2
for N even, B≥2
there is at least one valid game consistent with the input

Example Input :
3
10 0 2
11 2 1
12 192 192
Example Output :
378
379
0
Explanation :
Example case 1: The total time given to both clocks after 10 turns is 2⋅(180+10)=380 seconds. The total time left at the end is 0+2=2 seconds. 
The duration of the game is 380−2=378 seconds.
Example case 3: The total time given to both clocks after 12 turns is 2⋅(180+12)=384 seconds. The total time left at the end is 192+192=384 seconds. 
The duration of the game is 384−384=0

*/
#include <iostream>
using namespace std;

int main() {
    int T = 0;
	cin >> T;
	
	while(T--)
	{
	    int N = 0, A = 0, B = 0;
	    cin >> N >> A >> B;
	    cout << (2*(180 + N)) - (A + B) << endl;
	}
	return 0;
}
