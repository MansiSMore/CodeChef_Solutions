/*
You are given N identical squares, each with side length A. All the squares have their sides parallel to the x−axis and y−axis. 
That is, the squares are not tilted. You have to take several (possibly, zero or all) squares and rearrange them to obtain a mega square. 
The mega square can't have any gap in the enclosed region or have overlapping squares. Also, you cannot rotate any square.
Output the side length of the largest mega square that you can obtain.

Input Format :
The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N,A.

Output Format :
For each test case, print a single line containing one integer - the side length of the largest square you can obtain.

Constraints :
1≤T≤100
1≤N≤105
1≤A≤104

Sample Input 1 :
5
3 2
5 3
16 18
11 8
8 6

Sample Output 1 :
2
6
72
24
12

Explanation :
Test case 1: You can choose just one square to form the mega square. So the side length will be 2.
Test case 2: You can choose 4 squares to form a mega square with side-length 2⋅A =6.

*/
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0, A = 0;
        cin >> N >> A;
        cout << int(sqrt(N)) * A << endl;
    }
	return 0;
}
