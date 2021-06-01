/*
Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string.

Input :
The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow.
Each test case is described with a single line containing a string S, the alphanumeric string.

Output :
For each test case, output a single line containing the sum of all the digit characters in that string.

Constraints :
1 ≤ T ≤ 1000
1 ≤ |S| ≤ 1000, where |S| is the length of the string S.

Example :
Input:
1
ab1231da

Output:
7
Explanation
The digits in this string are 1, 2, 3 and 1. Hence, the sum of all of them is 7.

*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        string s;
        cin >> s;
        
        int sum = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                sum += s[i] - '0';
            }
        }
        cout << sum << endl;
    }
	return 0;
}
