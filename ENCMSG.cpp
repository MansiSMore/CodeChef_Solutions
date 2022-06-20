/*
Chef recently graduated Computer Science in university, so he was looking for a job. 
He applied for several job offers, but he eventually settled for a software engineering job at ShareChat. 
Chef was very enthusiastic about his new job and the first mission assigned to him was to implement a message encoding feature to ensure 
the chat is private and secure.
Chef has a message, which is a string SS with length NN containing only lowercase English letters. It should be encoded in two steps as follows:
Swap the first and second character of the string SS, then swap the 3rd and 4th character, then the 5th and 6th character and so on. 
If the length of SS is odd, the last character should not be swapped with any other.
Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', each occurrence of 'b' by 'y', 
each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.
The string produced in the second step is the encoded message. Help Chef and find this message.

Input :
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer NN.
The second line contains the message string SS.

Output :
For each test case, print a single line containing one string — the encoded message.

Constraints :
1 \le T \le 1,0001≤T≤1,000
1 \le N \le 1001≤N≤100
|S| = N∣S∣=N
SS contains only lowercase English letters

Sample 1:
Input :
2
9
sharechat
4
chef
Output :
shizxvzsg
sxuv

Explanation:
Example case 1: The original message is "sharechat". 
In the first step, we swap four pairs of letters (note that the last letter is not swapped), so it becomes "hsraceaht". 
In the second step, we replace the first letter ('h') by 's', the second letter ('s') by 'h', and so on, so the resulting encoded message is "shizxvzsg".
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_length = 0;
        cin >> N_length;
        
        string str;
        cin >> str;
        
        for(int i = 0; i < N_length - 1; i += 2)
        {
            swap(str[i], str[i + 1]);
        }
        
        for(int i = 0; i < N_length; i++)
        {
            //let's consider ascii value of h is 104
            int ascii = str[i] - 'a';   // 104 - 97 = 7
            ascii = 25 - ascii;         // as diff between a and z is 25, if you want replacement subtract from 25.
                //25 - 7 = 18
            str[i] = 'a' + ascii;    //to get desired character add that value in ascii of a i.e. 97 + 18 = 115 i.e 's'
        }
        cout << str << endl;
    }
	return 0;
}
