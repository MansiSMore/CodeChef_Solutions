/*
Chef has his lunch only between 1 pm and 4 pm (both inclusive).
Given that the current time is X pm, find out whether it is lunchtime for Chef.

Input Format :
The first line of input will contain a single integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing one integer X.

Output Format :
For each test case, print in a single line 𝚈𝙴𝚂 if it is lunchtime for Chef. Otherwise, print 𝙽𝙾.
You may print each character of the string in either uppercase or lowercase (for example, 
the strings 𝚈𝚎𝚂, 𝚢𝙴𝚜, 𝚢𝚎𝚜 and 𝚈𝙴𝚂 will all be treated as identical).

Constraints :
1≤T≤12
1≤X≤12

Sample Input 1 :
3
1
7
3

Sample Output 1 :
YES
NO
YES

Explanation :
Test case 1: Lunchtime is between 1 pm and 4 pm (both inclusive). Since 1 pm lies within lunchtime, the answer is 𝚈𝙴𝚂.
Test case 2: Lunchtime is between 1 pm and 4 pm (both inclusive). Since 7 pm lies outside lunchtime, the answer is 𝙽𝙾.
Test case 3: Lunchtime is between 1 pm and 4 pm (both inclusive). Since 3 pm lies within lunchtime, the answer is 𝚈𝙴𝚂.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_chef_time = 0;
        cin >> X_chef_time;
        
        if((X_chef_time >= 1) && (X_chef_time <= 4))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
	return 0;
}
