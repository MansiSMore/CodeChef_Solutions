/*
Ezio can manipulate at most X number of guards with the apple of eden.
Given that there are Y number of guards, predict if he can safely manipulate all of them.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y.

Output Format :
For each test case, print ğğ´ğ if it is possible for Ezio to manipulate all the guards. Otherwise, print ğ½ğ¾.
You may print each character of the string in uppercase or lowercase (for example, the strings ğğğ, ğ¢ğ´ğ, ğ¢ğğ and ğğ´ğ will all be treated as identical).

Constraints :
1â¤Tâ¤100
1â¤X,Yâ¤100

Sample Input 1 :
3
5 7
6 6
9 1

Sample Output 1 :
NO
YES
YES

Explanation :
Test Case 1: Ezio can manipulate at most 5 guards. Since there are 7 guards, he cannot manipulate all of them.
Test Case 2: Ezio can manipulate at most 6 guards. Since there are 6 guards, he can manipulate all of them.
Test Case 3: Ezio can manipulate at most 9 guards. Since there is only 1 guard, he can manipulate the guard.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_at_most = 0, Y_number_of_guards = 0;
        cin >> X_at_most >> Y_number_of_guards;
        
        if(X_at_most >= Y_number_of_guards)
            cout << "Yes\n";
        else
            cout << "No\n";
            
    }
	return 0;
}
