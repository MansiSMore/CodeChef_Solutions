/*
Chef considers a string consisting of lowercase English alphabets beautiful if all the characters of the string are vowels.
Chef has a string S consisting of lowercase English alphabets, of length N. He wants to convert S into a beautiful string T. 
In order to do so, Chef does the following operation on every character of the string:
If the character is a consonant, change the character to its closest vowel.
If the character is a vowel, don't change it.
Chef realizes that the final string T is not unique. 
Chef wonders, what is the total number of distinct beautiful strings T that can be obtained by performing the given operations on the string S.
Since the answer can be huge, print it modulo 109+7.

Note:
There are 26 characters in the English alphabet. Five of these characters are vowels: a, e, i, o, and u. The remaining 21 characters are consonants.
The closest vowel to a consonant is the vowel that is least distant from that consonant. 
For example, the distance between the characters d and e is 1 while the distance between the characters d and a is 3.
The distance between the characters z and a is 25 and not 1.

Input Format :
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer N, denoting the length of the string S.
The second line of each test case contains a string S consisting of lowercase English alphabets.

Output Format :
For each test case, output the total number of distinct beautiful strings T that can be obtained by performing the given operations on the string S, 
modulo 109+7.

Constraints :
1≤T≤1000
1≤N≤105
Sum of N over all test cases does not exceed 105.

Sample Input 1 :
4
5
aeiou
5
abcde
8
starters
8
codechef

Sample Output 1 :
1
2
4
4

Explanation :
Test case 1: All the characters of the string S are vowels. Thus, none of the characters would be changed. The resulting string T will be aeiou.

Test case 2:There are 2 possible strings that can be obtained by performing the given operations on the string S. Those are aaaee and aaeee.
*/

#include <iostream>
using namespace std;
#define ll long long

const int M = 1e9 + 7;
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_length = 0, cnt = 1;
        cin >> N_length;
        
        string s;
        cin >> s;
        
        for(int i = 0; i < N_length; i++)
        {
            if(s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
            {
                cnt = (cnt * 2) % M;
            }
        }
        
        cout << cnt << endl;
    }
	return 0;
}
