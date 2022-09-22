/*
Alice has scored X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. 
Determine whether she is happy or not.

Input Format :
The first and only line of input contains two space-separated integers X,Y — the marks of Alice and Bob respectively.

Output Format :
For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement.
The judge is case insensitive so you may output the answer in any case. In particular YES, yes, yEsare all considered equivalent toYes`.

Constraints :
1≤X,Y≤100

Sample Input 1 :
2 1
Sample Output 1 :
Yes
Explanation :
Alice has scored X=2 marks whereas Bob has scored Y=1 mark. As Alice has scored twice as much as Bob (i.e. X≥2Y), the answer is Yes.

Sample Input 2 :
1 2
Sample Output 2 :
No
Explanation :
Alice has scored X=1 mark whereas Bob has scored Y=2 marks. As Alice has not scored twice as much as Bob (i.e. X<2Y), the answer is No.
*/
#include <iostream>
using namespace std;

int main() 
{
    int X_Alice = 0, Y_Bob = 0;
    cin >> X_Alice >> Y_Bob;
    
    if(Y_Bob * 2 <= X_Alice)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
	return 0;
}
