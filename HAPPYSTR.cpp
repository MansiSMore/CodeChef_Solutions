/*
Chef has a string S with him. 
Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels.
Determine whether Chef is happy or not.
Note that, in english alphabet, vowels are a, e, i, o, and u.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string S.

Output Format :
For each test case, if Chef is happy, print HAPPY else print SAD.
You may print each character of the string in uppercase or lowercase 
(for example, the strings hAppY, Happy, haPpY, and HAPPY will all be treated as identical).

Constraints :
1≤T≤1000
3≤|S|≤1000, where |S| is the length of S.
S will only contain lowercase English letters. 

Sample Input 1 :
4
aeiou
abxy
aebcdefghij
abcdeeafg

Sample Output 1 :
Happy
Sad
Sad
Happy

Explanation :
Test case 1: Since the string aeiou is a contiguous substring and consists of all vowels and has a length >2, Chef is happy.

Test case 2: Since none of the contiguous substrings of the string consist of all vowels and have a length >2, Chef is sad.

Test case 3: Since none of the contiguous substrings of the string consist of all vowels and have a length >2, Chef is sad.

Test case 4: Since the string eea is a contiguous substring and consists of all vowels and has a length >2, Chef is happy.
*/
#include <iostream>
using namespace std;


int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        string str;
        cin >> str;
        
        bool flag = false;

        for(int i = 0; i < str.length() - 2; i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                if(str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u')
                {
                    if(str[i + 2] == 'a' || str[i + 2] == 'e' || str[i + 2] == 'i' || str[i + 2] == 'o' || str[i + 2] == 'u')
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        
        if(flag == true)
        {
            cout << "Happy\n";
        }
        else
        {
            cout << "Sad\n";
        }
    }
	return 0;
}
