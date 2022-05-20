/*
Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.
Our Chef took the above advice very seriously and decided to set a target for himself.
Chef decides to solve at least 10 problems every week for 4 weeks.
Given the number of problems he actually solved in each week over 4 weeks as P1,P2,P3, and P4, output the number of weeks in which Chef met his target.

Input Format :
There is a single line of input, with 4 integers P1,P2,P3, and P4. These are the number of problems solved by Chef in each of the 4 weeks.

Output Format :
Output a single integer in a single line - the number of weeks in which Chef solved at least 10 problems.

Constraints :
1≤P1,P2,P3,P4≤100

Sample Input 1 :
12 15 8 10
Sample Output 1 :
3
Explanation :
Chef solved at least 10 problems in the first, second and fourth weeks. He failed to solve at least 10 problems in the third week. 
Hence, the number of weeks in which Chef met his target is 3.

Sample Input 2 :
2 3 1 10
Sample Output 2 :
1
Explanation :
Chef solved at least 10 problems in the fourth week. He failed to solve at least 10 problems in all the other three weeks. 
Hence, the number of weeks in which Chef met his target is 1.

Sample Input 3 :
12 100 99 11
Sample Output 3 :
4
Explanation :
Chef solved at least 10 problems in all the four weeks. Hence, the number of weeks in which Chef met his target is 4.

Sample Input 4 :
1 1 1 1
Sample Output 4 :
0
Explanation :
Chef was not able to solve at least 10 problems in any of the four weeks. Hence, the number of weeks in which Chef met his target is 0.
*/

#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll Prob_1 = 0, Prob_2 = 0, Prob_3 = 0, Prob_4 = 0, cnt = 0;
    cin >> Prob_1 >> Prob_2 >> Prob_3 >> Prob_4;
    
    if(Prob_1 >= 10)
    {
        cnt++;
    }
    
    if(Prob_2 >= 10)
    {
        cnt++;
    }
    
    if(Prob_3 >= 10)
    {
        cnt++;
    }
    
    if(Prob_4 >= 10)
    {
        cnt++;
    }
    
    cout << cnt << endl;
    
	return 0;
}
