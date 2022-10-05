/*
Alice and Bob are playing a game with a binary string S of length N and an empty string T.
They both take turns and Alice plays first.
In Alice's turn, she picks the first character of string S, 
appends the character to either the front or back of string T and deletes the chosen character from string S.
In Bob's turn, he picks the last character of string S, 
appends the character to either the front or back of string T and deletes the chosen character from string S.
The game stops when S becomes empty.
Alice wants the resultant string T to be lexicographically smallest, while Bob wants the resultant string T to be lexicographically largest possible.
Find the resultant string T, if both of them play optimally.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N - the length of the string S.
The next line is the binary string S.
 
Output Format :
For each test case, print the the resultant string T, if both of them play optimally.

Constraints :
1≤T≤100
1≤N≤1000
S can only contain the characters 0 or 1.

Sample Input 1 :
4
2
10
4
0001
6
010111
10
1110000010

Sample Output 1 :
10
0100
101101
0011011000

Explanation :
Test case 1: Alice picks the first bit which is 1 and appends it to the empty string T. 
Bob then picks the last bit 0 and appends it to the back of T making the resultant string to be 10.

Test case 2:
Alice picks 0 and adds it to T. Thus, S becomes 001 and T becomes 0.
Bob picks 1 and adds it to front of T. Thus, S becomes 00 and T becomes 10.
Alice picks 0 and adds it to front of T. Thus, S becomes 0 and T becomes 010.
Bob picks 0 and adds it to back of T. Thus, S becomes empty and T becomes 0100.
*/
#include <iostream>
using namespace std;

int main() {
    
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_length = 0;
        cin >> N_length;
        
        string str;
        cin >> str;
        
        string res = "";
        int i = 0, j = str.length() - 1;
      
        while(i <= j)
        {
            if(str[i] == '0')
            {
                res = str[i] + res;
                //cout << res << "in\n";
            }
            else 
            {
                res = res + str[i];
            }
            
            if(i < j)
            {
                if(str[j] == '1')
                {
                    res = str[j] + res;
                }
                else
                {
                    res = res + str[j];
                }
                j--;
            }
            i++;
        }
        
        cout << res << endl;
    }
	return 0;
}
