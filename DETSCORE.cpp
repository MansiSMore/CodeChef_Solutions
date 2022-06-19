/*
Chef appeared for a placement test.
There is a problem worth X points. Chef finds out that the problem has exactly 10 test cases. It is known that each test case is worth the same number of points.
Chef passes N test cases among them. Determine the score Chef will get.
NOTE: See sample explanation for more clarity.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and N, 
the total points for the problem and the number of test cases which pass for Chef's solution.

Output Format :
For each test case, output the points scored by Chef.

Constraints :
1≤T≤100
10≤X≤200
0≤N≤10
X is a multiple of 10.

Sample Input 1 :
4
10 3
100 10
130 4
70 0

Sample Output 1 :
3
100
52
0
 
Explanation :
Test Case 1: The problem is worth 10 points and since there are 10 test cases, each test case is worth 1 point. 
Since Chef passes 3 test cases, his score will be 1⋅3=3 points.

Test Case 2: The problem is worth 100 points and since there are 10 test cases, each test case is worth 10 points. 
Since Chef passes all the 10 test cases, his score will be 10⋅10=100 points.

Test Case 3: The problem is worth 130 points and since there are 10 test cases, each test case is worth 13 points. 
Since Chef passes 4 test cases, his score will be 13⋅4=52 points.

Test Case 4: The problem is worth 70 points and since there are 10 test cases, each test case is worth 7 points. 
Since Chef passes 0 test cases, his score will be 7⋅0=0 points.
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
        ll X_points = 0, N_testcases = 0;
        cin >> X_points >> N_testcases;
        
        cout << (X_points / 10) * N_testcases << endl; 
    }
	return 0;
}
