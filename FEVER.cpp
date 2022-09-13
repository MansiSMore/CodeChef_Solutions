/*
Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be X °F.
A person is said to have fever if his body temperature is strictly greater than 98 °F.
Determine if Chef has fever or not.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer X - the body temperature of Chef in °F.
 
Output Format :
For each test case, output YES if Chef has fever. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1≤T≤10
94≤X≤103

Sample Input 1 :
3
98
100
96

Sample Output 1 :
NO
YES
NO

Explanation :
Test Case 1: Since X=98 is not greater than 98, Chef does not have fever.
Test Case 2: Since X=100 is greater than 98, Chef has fever.
Test Case 3: Since X=96 is not greater than 98, Chef does not have fever.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_temp = 0;
        cin >> X_temp;
        
        if(X_temp > 98)
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
