/*
What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
One side of the square must be parallel to the base of the isosceles triangle.
Base is the shortest side of the triangle.

Input :
First line contains T, the number of test cases.
Each of the following T lines contains 1 integer B.

Output :
Output exactly T lines, each line containing the required answer.

Constraints :
1 ≤ T ≤ 103
1 ≤ B ≤ 104

Sample Input :
11
1
2
3
4
5
6
7
8
9
10
11

Sample Output :
0
0
0
1
1
3
3
6
6
10
10

*/
#include <iostream>
using namespace std;

int main() 
{
    int t = 0;
    cin >> t;
    while (t--)
    {
      int b = 0;
      cin >> b;

        int x = (b / 2) - 1;
      if(x < 0)
          x = 0;

      cout << x * (x + 1) / 2 << endl;

    }
    return 0;
}
