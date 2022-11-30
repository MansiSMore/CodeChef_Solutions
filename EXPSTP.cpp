/*
There is an N×N grid, with rows numbered 1 to N from top to bottom and columns numbered 1 to N from left to right. 
The cell at the intersection of the i-th row and j-th column is denoted (i,j).
Chef is standing at position (x1,y1) of this grid. He wants to reach position (x2,y2).
To achieve this, he can take either horizontal or vertical steps. That is, from cell (x,y), he can move to one of (x−1,y),(x+1,y),(x,y−1),(x,y+1).
However, Chef does not need to stay within the grid, that is, he can choose to go outside it if he so wishes.
The cost of a horizontal/vertical step is 0 if both the starting and ending square lie outside the grid, and 1 otherwise.
Formally, suppose Chef takes one step from (x,y) to (x′,y′). Then,
If (x,y) lies within the grid, the cost of this step is 1
If (x′,y′) lies within the grid, the cost of this step is 1
If both the above don't hold, the cost of this step is 0
Find the minimum cost to reach (x2,y2) from (x1,y1).

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of one line of input containing five space-separated integers N, x1, y1, x2, and y2.

Output Format :
For each test case, output on a new line the minimum cost of traveling from (x1,y1) to (x2,y2).

Constraints :
1≤T≤105
1≤N≤105
1≤x1,y1,x2,y2≤N

Sample Input 1 :
6
3 1 1 2 3
5 2 3 3 4
3 1 1 2 1
6 2 1 5 5
8 3 4 6 7
10 4 5 9 9

Sample Output 1 :
2
2
1
3
5
6

Explanation :
Test case 1: One optimal sequence of moves is as follows:
Chef moves from (1,1) to (0,1) with a cost of 1. Note that (0,1) is outside the grid.
Now, Chef can move on the outside from (0,1) to (2,4) with no cost.
Finally, Chef moves from (2,4) to (2,3) with cost 1, for a total cost of 2.

Test case 2: Chef can move as follows: (2,3)→(3,3)→(3,4), for a cost of 2.

Test case 4: Chef can move as follows: (2,1)→(2,0) with cost 1, then (2,0)→(5,7) on the outside with cost 0, 
then (5,7)→(5,6)→(5,5) with cost 2 for a total cost of 3.
*/
#include <iostream>
using namespace std;

#define ll long long
int main() {
    
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_cars = 0, M_cars = 0;
        cin >> N_cars >> M_cars;
        
        cout << N_cars * 5 + M_cars * 7 << endl;
    }
	return 0;
}
