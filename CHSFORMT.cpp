/*
Given the time control of a chess match as a+b, determine which format of chess out of the given 4 it belongs to.
1) Bullet if a+b<3
2) Blitz if 3≤a+b≤10
3) Rapid if 11≤a+b≤60
4) Classical if 60<a+b

Input Format :
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, two integers a,b.

Output Format :
For each testcase, output in a single line, answer 1 for bullet, 2 for blitz, 3 for rapid, and 4 for classical format.

Constraints :
1≤T≤1100 
1≤a≤100
0≤b≤10

Sample Input 1 :
4
1 0
4 1
100 0
20 5

Sample Output 1 :
1
2
4
3

Explanation :
TestCase 1: Since a+b=1<3, it belongs to bullet format.
TestCase 2: Since 3≤(a+b=5)≤10, it belongs to blitz format.

*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int a = 0, b = 0, sum = 0;
        cin >> a >> b;
        sum = a + b;
        
        if(sum < 3)
            cout << 1 << endl;
        else if((3 <= sum) && (sum <= 10))
            cout << 2 << endl;
        else if((11 <= sum) && (sum <= 60))
            cout << 3 << endl;
        else if(60 < sum)
            cout << 4 << endl;
    }
	return 0;
}
