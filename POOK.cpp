/*
We have found a new chess character — pook. It has the qualities of both a rook and a pawn. 
Specifically, treating the chessboard to be an N×N grid where (i,j) denotes the intersection of the i-th row and the j-th column, 
a pook placed at square (x,y) threatens the following squares:
(i,y) for every 1≤i≤N
(x,i) for every 1≤i≤N
(x+1,y−1), if x<N and y≥2
(x+1,y+1), if x<N and y<N
Find the maximum number of pooks that can be placed on an empty N×N chessboard such that none of them threaten each other.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing a single integer N.

Output Format :
For each test case, output in a single line the maximum number of pooks that can be placed on the chessboard such that they don't threaten each other.

Constraints :
1≤T≤105
1≤N≤109

Sample Input 1 :
3
1
2
3

Sample Output 1 :
1
1
2

Explanation :
Test case 1: There is a single square, so we have a single pook.

Test case 2: We can only place one pook. No matter where the first is placed, placing a second will lead to one of the two being threatened.

Test case 3: Placing 2 pooks on a 3×3 grid is easy — for example, place one at (1,2) and another at (3,3). 
It can be shown that placing three is not possible.
*/
#include <iostream>
using namespace std;

int main()
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        long long N_grid = 0;
        cin >> N_grid;
        
        if(N_grid == 1)
        {
            cout << 1 << endl;
        }
        else if(N_grid == 2 || N_grid == 3)
        {
            cout << N_grid - 1 << endl;
        }
        else
        {
            cout << N_grid << endl;
        }
        
    }
    return 0;
}
