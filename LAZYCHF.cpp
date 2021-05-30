/*
Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m∗x units of time.
But there is always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to complete the work.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, three integers x,m,d.

Output:
For each testcase, output in a single line answer to the problem.

Constraints :
1≤T≤104
1≤x,m≤10
0≤d<100

Sample Input:
3
1 1 0
1 3 1
2 2 3

Sample Output:
1
2
4
Explanation:
TestCase 1: Chef takes 1∗1=1 unit of time which is equal to the upper bound(1+0=1 unit) to do the work.
TestCase 2: Chef takes min(1∗3,1+1)=min(3,2)=2 units of time to do the work.
TestCase 3: Chef takes 2∗2=4 units of time which is less than the upper bound(2+3=5 units) to do the work.
*/
#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int x = 0, m = 0, d = 0;
        cin >> x >> m >> d;
        int mult = x * m;
        int add = x + d;
        
        if(mult > add)
            cout << add << endl;
        else
            cout << mult << endl;
    }
	return 0;
}
