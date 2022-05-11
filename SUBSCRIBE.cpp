/*
Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes.
The meeting platform supports a meeting of maximum 30 minutes without subscription and a meeting of unlimited duration with subscription.
Determine whether Chef needs to take a subscription or not for setting up the meet.

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single integer X - denoting the duration of the lecture.

Output Format :
For each test case, print in a single line, YES if Chef needs to take the subscription, otherwise print NO.
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints :
1≤T≤100
1≤X≤100
 
Sample Input 1 :
4
50
3
30
80

Sample Output 1 :
YES
NO
NO
YES

Explanation :
Test Case 1: Without subscription, the platform allows only 30 minutes of duration. Since Chef needs to conduct a lecture of 50 minutes, 
he needs to buy the subscription.

Test Case 2: Without subscription, the platform allows 30 minutes of duration. Since Chef needs to conduct a lecture of 3 minutes only, 
he does not need to buy the subscription.

Test Case 3: Without subscription, the platform allows 30 minutes of duration. Since Chef needs to conduct a lecture of 30 minutes only, 
he does not need to buy the subscription.

Test Case 4: Without subscription, the platform allows only 30 minutes of duration. Since Chef needs to conduct a lecture of 80 minutes, 
he needs to buy the subscription.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_duration = 0;
        cin >> X_duration;
        
        if(X_duration <= 30)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
        
    }
	return 0;
}
