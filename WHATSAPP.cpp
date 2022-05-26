/*
Chef recently installed Whatsapp on his mobile device. Currently, he has no unread messages.
Every hour, he receives X messages and he is able to read Y messages out of them. After some time Chef notices that he has several unread messages.
Can you tell him exactly how many unread messages Chef has after Z hours have passed?

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of a single line containing three space-separated integers X,Y, and Z$, denoting the number of messages Chef receives every hour, 
the number of messages he reads every hour, the and number of hours that have passed, respectively.

Output Format :
For each test case, output on a new line a single integer denoting the number of unread messages after Z hours.
Constraints
1≤T≤2⋅104
1≤Y≤X≤50
1≤Z≤10

Sample Input 1 :
4
5 2 2
2 2 6
3 2 1
9 1 2

Sample Output 1 :
6
0
1
16

Explanation :
Test case 1: Every hour, Chef receives 5 messages and he reads 2 of them. 
After 1 hour he will have 3 unread messages and after 2 hours he will have 6 unread messages.

Test case 2: Chef reads all the messages he gets every hour so he has no unread messages.

Test case 3: Chef received 3 messages and read 2 out of them so he has 1 unread message now.

Test case 4: Chef received 18 messages and read 2 out of them so he has 16 unread messages now.
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
        ll X_messages = 0, Y_read = 0, Z_hours = 0;
        cin >> X_messages >> Y_read >> Z_hours;
        
        cout << (X_messages - Y_read) * Z_hours << endl;
    }
	return 0;
}
