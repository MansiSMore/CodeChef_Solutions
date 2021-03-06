/*
Chef hosts a party for his birthday. There are N people at the party. All these N people decide to play Jenga.
There are X Jenga tiles available. In one round, all the players pick 1 tile each and place it in the tower.
The game is valid if:
All the players have a tile in each round;
All the tiles are used at the end.
Given N and X, find whether the game is valid.

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, 
containing two space-separated integers N and X representing the number of people at the party and the number of available tiles respectively.

Output Format :
For each test case, output in a single line ğğ´ğ if the game is valid, else output ğ½ğ¾.
You may print each character of the string in uppercase or lowercase (for example, the strings ğğğ, ğ¢ğ´ğ, ğ¢ğğ and ğğ´ğ will all be treated as identical).

Constraints :
1â¤Tâ¤104
1â¤N,Xâ¤1000

Sample Input 1 :
3
3 3
4 2
2 4

Sample Output 1 :
YES
NO
YES

Explanation :
Test case 1: The game will last for 1 round after which the tiles will finish.
Test case 2: There are not enough Jenga tiles for everyone to place.
Test case 3: The game will last for 2 rounds as after round 2 all Jenga tiles are used.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_people = 0, X_jenga_tiles = 0;
        cin >> N_people >> X_jenga_tiles;
        
        if(X_jenga_tiles % N_people == 0)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
	// your code goes here
	return 0;
}
