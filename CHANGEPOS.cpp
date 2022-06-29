/*
There is a 10×10 grid with rows numbered 1 to 10 from top to bottom, and columns 1 to 10 from left to right. 
Each cell is identified by a pair (r,c) which means that the cell is located at row r and column c.
If Chef's current location is (a,b), then in one move Chef can go to (c,d) if both of the following are satisfied:
a≠c
b≠d
Determine the minimum number of moves required to go from (sx,sy) to (ex,ey).

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four integer sx, sy, ex, ey — the coordinates of the starting and ending cells.

Output Format :
For each testcase, output the minimum number of moves required to go from (sx,sy) to (ex,ey).

Constraints :
1≤T≤1000
1≤sx,sy,ex,ey≤10
(sx,sy)≠(ex,ey)

Sample Input 1 :
4
1 2 9 8
5 5 5 7
8 6 6 8
3 10 8 10

Sample Output 1 :
1
2
1
2

Explanation :
Test case 1: Chef can go from (1,2) to (9,8) in one move since 1≠9 and 2≠8.

Test case 2: Chef will require at least two moves. One such sequence of moves is (5,5)→(2,3)→(5,7).
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
        ll a_row = 0, b_col = 0, c_row = 0, d_col = 0;
        cin >> a_row >> b_col >> c_row >> d_col;
        
        if(a_row == c_row || b_col == d_col)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
	return 0;
}
