/*
Chef has recently been playing a lot of chess in preparation for the ICCT (International Chef Chess Tournament).
Since putting in long hours is not an easy task, Chef's mind wanders elsewhere. He starts counting the number of squares with odd side length on his chessboard..
However, Chef is not satisfied. He wants to know the number of squares of odd side length on a generic N∗N chessboard.

Input:
The first line will contain a single integer T, the number of test cases.
The next T lines will have a single integer N, the size of the chess board.

Output:
For each test case, print a integer denoting the number of squares with odd length.

Constraints
1≤T≤100
1≤N≤1000
Sample Input:
    2
    3
    8
Sample Output:
    10
    120
*/
#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        int N = 0, cnt = 0;
        cin >> N;
        for(int i = 1; i <= N; i += 2)
        {
            cnt += (N - i + 1) * (N - i + 1);
        }
        std::cout << cnt << std::endl;
    }
	return 0;
}
