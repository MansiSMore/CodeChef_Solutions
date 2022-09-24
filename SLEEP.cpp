/*
A person is said to be sleep deprived if he slept strictly less than 7 hours in a day.
Chef was only able to sleep X hours yesterday. Determine if he is sleep deprived or not.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer X — the number of hours Chef slept.

Output Format :
For each test case, output YES if Chef is sleep-deprived. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1≤T≤20
1≤X≤15

Sample Input 1 :
3
4
7
10

Sample Output 1 :
YES
NO
NO

Explanation :
Test Case 1: Since 4<7, Chef is sleep deprived.

Test Case 2: Since 7≥7, Chef is not sleep deprived.

Test Case 3: Since 10≥7, Chef is not sleep deprived.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_hours = 0;
        cin >> X_hours;
        
        if(X_hours < 7)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
	return 0;
}
