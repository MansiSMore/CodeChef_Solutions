/*
Alice and Bob are playing a game. They have a common string S of length N. 
The players also have their individual strings A (belonging to Alice) and B (belonging to Bob) which are empty in the beginning. 
Game begins with Alice and both players take alternate turns.
In her/his turn, the player picks a single character from string S, 
adds it to the end of their individual string and deletes the picked character from string S.
The game continues until string S is empty. Find whether there exists a sequence of moves such that the strings A and B are same at the end of the game.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the length of the string.
The next line contains the strings S consisting of lowercase english alphabets.

Output Format :
For each test case, output on a new line, YES if there exists a sequence of moves such that the strings A and B are same at the end of the game, 
and NO otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints :
1≤T≤103
1≤N≤105
S consists of lowercase english alphabets
The sum of N over all test cases does not exceed 2⋅105.

Sample Input 1 :
4
4
abab
5
cbcba
4
abcd
6
pqprqr

Sample Output 1 :
YES
NO
NO
YES

Explanation :
Test case 1: Consider the following sequence of moves:
Alice picks the first character of string S and adds it to the end of string A. Thus, S becomes bab and A becomes a.
Bob picks the second character of string S and adds it to the end of string B. Thus, the strings are S= bb, A= a, and B= a .
Alice picks the second character of string S and adds it to the end of string A. Thus, the strings are S= b, A= ab, and B= a .
Bob picks the first character of string S and adds it to the end of string B. Thus, S becomes empty, A= ab, and B= ab .
We can see that using this sequence of moves, the final strings A and B are equal.

Test case 2: There exists no sequence of moves such that the strings A and B become equal in the end.

Test case 3: There exists no sequence of moves such that the strings A and B become equal in the end.

Test case 4: Consider the following sequence of moves:
Alice picks the first character of string S and adds it to the end of string A. Thus, S becomes qprqr and A becomes p.
Bob picks the second character of string S and adds it to the end of string B. Thus, the strings are S= qrqr, A= p, and B= p .
Alice picks the second character of string S and adds it to the end of string A. Thus, the strings are S= qqr, A= pr, and B= p .
Bob picks the third character of string S and adds it to the end of string B. Thus, S becomes qq, A becomes pr, and B becomes pr.
Alice picks the second character of string S and adds it to the end of string A. Thus, the strings are S= q, A= prq, and B= pr .
Bob picks the first character of string S and adds it to the end of string B. Thus, S becomes empty, A= prq, and B= prq .
We can see that using this sequence of moves, the final strings A and B are equal.
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
        
        string s;
        cin >> s;
        
        unordered_map<char, int> uobj;
        
        for(int i = 0; i < N_length; i++)
        {
            uobj[s[i]]++;
        }
        
        bool flag = true;
        for(auto x : uobj)
        {
            if(x.second % 2 == 1)
            {
               flag = false; 
               break;
            }
        }
        
        if(flag == false)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
	return 0;
}
