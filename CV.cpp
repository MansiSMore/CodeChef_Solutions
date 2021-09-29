/*
Chef has a string S with length N. He needs to find the number of indices i (1≤i≤N−1) such that the i-th character of this string is a consonant and 
the i+1-th character is a vowel. However, he is busy, so he asks for your help.
Note: The letters 'a', 'e', 'i', 'o', 'u' are vowels; all other lowercase English letters are consonants.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a single string S with length N.

Output :
For each test case, print a single line containing one integer ― the number of occurrences of a vowel immediately after a consonant.

Constraints :
1≤T≤100
1≤N≤100
S contains only lowercase English letters

Subtasks :
Subtask #1 (100 points): original constraints

Sample Input 1 :
3
6
bazeci
3
abu
1
o

Sample Output 1 
3
1
0

Explanation :
Example case 1: The vowel 'a' follows after the consonant 'b', 'e' follows after 'z' and 'i' follows after 'c', so the answer is 3.
Example case 2: The only vowel 'u' follows after 'b', so the answer is 1.

*/
#include <iostream>
using namespace std;

bool vowelOrConsonant(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return true;
    else
        return false;
}

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int n = 0, cnt = 0;
        cin >> n;
        
        string s;
        cin >> s;
        
        for(int i = 0; i < s.length() - 1; i++)
        {
            if(vowelOrConsonant(s[i]) == false and vowelOrConsonant(s[i + 1]) == true)
                cnt++;
        }
        cout << cnt << endl;
    }
	return 0;
}
