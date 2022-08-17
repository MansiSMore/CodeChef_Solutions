/*
Chef has recently introduced a feature which allows you to open any user’s submitted code (not just your own), 
and ask an AI to explain that code in English. For example, you can go to https://www.codechef.com/viewsolution/70530506 and click on "Analyse This Code".
But there is a restriction that the feature works only on codes which are at most 1000 characters long. 
Given the number of characters, C, in a particular code, output whether the feature is available on this code or not.

Input Format :
The only line of input will contain a single integer C, denoting the number of characters in the code.

Output Format :
Output a single line which contains either "Yes", if the feature is available on this code, or "No", if not.
You may print each character of the string in either uppercase or lowercase (for example, the strings NO, nO, No, and no will all be treated as identical).

Constraints :
1≤C≤10000

Sample Input 1 :
50
Sample Output 1 :
Yes
Explanation :
The code's length is only 50, and 50≤1000. So, the feature is available, and the answer is "Yes".

Sample Input 2 :
1000
Sample Output 2 :
Yes
Explanation :
The code's length is 1000, and 1000≤1000. So, the feature is available, and the answer is "Yes".

Sample Input 3 :
1001
Sample Output 3 :
No
Explanation :
The code's length is 1001, and 1001≰1000. So, the feature is not available, and the answer is "No".
*/
#include <iostream>
using namespace std;

int main() 
{
    int C_characters = 0;
    cin >> C_characters;
    
    if(C_characters <= 1000)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
	return 0;
}
