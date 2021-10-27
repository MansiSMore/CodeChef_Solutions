/*
There is an N by M grid. A thief is trying to escape from a policeman. The thief is currently in cell (x,y) in the grid, while the policeman is in cell (a,b). 
Cells are numbered from 1 to N, top to bottom, and 1 to M, left to right. Both of them are at different cells initially.
Both of them take turns alternatively. First it is the thief's turn, then the police's, and so on. The thief needs to reach the cell (N,M) to escape. 
In his turn, the thief can move either right, or down, from his current cell. In other words, if his current cell is (i,j), then in one turn, 
he can either go to cell (i,j+1) or the cell (i+1,j). He can't stop, i.e., he needs to move during each of his turns. 
The policeman can move right, down, or (right + down) in one turn. In other words, in one turn, if his current cell is (i,j), 
then he can go to the cell (i,j+1), the cell (i+1,j) or the cell (i+1,j+1). It is not compulsory for the policeman to move every turn, i.e., 
he can choose to stay in his current cell in a particular turn of his. Neither of them are in cell (N,M) at the start.
The policeman catches the thief if he's in the same cell as the thief at any point of time, and he had reached that cell before the thief. 
If the thief reaches the cell (N,M) before the policeman, then he shall escape. Find if the thief shall escape, or the policeman shall catch him, 
if both of them move optimally, and if both of them have perfect knowledge of the other person's location at all times. 
Print YES if the thief shall escape, else print NO if the policeman shall catch him.

Input:
The first line contains an integer T, denoting the number of test cases.
The first line of each test case contains two space-separated integers N and M, denoting the number of rows and columns in the grid, respectively.
The second line of each test case contains two space-separated integers x and y, denoting the coordinates of the cell that the thief is in, initially.
The third line of each test case contains two space-separated integers a and b, denoting the coordinates of the cell that the policeman is in, initially.

Output:
For each test case print YES if the thief shall escape, else print NO, in a separate line.
You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints:
1≤T≤105
3≤N,M≤105
1≤x,a≤N
1≤y,b≤M
Both of them are in different cells initially.
Neither of them are in cell (N,M) initially.
The thief needs to move during every turn of his. The policeman can choose not to move.

Sample Input 1 :
3
3 3
2 3
3 1
3 3
2 3
3 2
5 4
1 2
4 2

Sample Output 1 :
YES
YES
NO

Explanation :
Sample Test 1: It's the thief's turn first. In his turn, he simply moves from his current cell, (2,3) to the escape cell (3,3) and escapes successfully.

Sample Test 2: Similar to the previous test case, the thief reaches the escape cell in his turn. 
The policeman too reaches the escape cell (3,3) from his cell (3,2) in his turn, 
but since the thief had already reached it in his turn, he manages to escape successfully.

Sample Test 3: The thief is initially at (1,2), and needs to reach (5,4). The police is initially at (4,2). So initially, 
both of them are in the second column. The police waits at (4,2) as long as the thief is in the second column. 
So he will either catch the thief at the cell (4,2), or the thief moves to the third column at some point. 
And when he does so, the police moves to (4,3) in his next turn, and waits there till the thief moves to the fourth column. 
So, similar to the previous situation, the police will either catch the thief at the cell (4,3), or the thief moves to the fourth column. 
And when the thief moves to the fourth column, the police moves to the cell (4,4) and waits there, and will eventually catch the thief. 
Thus, the thief can't escape.

*/

#include <iostream>
using namespace std;

int main() 
{
	
	int T = 0;
	cin >> T;
	
	while(T--)
	{
	    int N = 0, M = 0, X = 0, Y = 0, A = 0, B = 0;
	    
	    cin >> N >> M >> X >> Y >> A >> B;
	    
	    int t1 = N - X + M - Y;
	    
	    int t2 = min(N - A, M - B);
	    
	    int t3 = max(N - A, M - B) - t2;
	    
	    int t4 = t2 + t3;
	    
	    if(t4 >= t1)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}
