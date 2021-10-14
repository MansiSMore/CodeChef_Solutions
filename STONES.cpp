/*
Soma is a fashionable girl. She absolutely loves shiny stones that she can put on as jewellery accessories. 
She has been collecting stones since her childhood - now she has become really good with identifying which ones are fake and which ones are not. 
Her King requested for her help in mining precious stones, so she has told him which all stones are jewels and which are not. 
Given her description, your task is to count the number of jewel stones.
More formally, you're given a string J composed of latin characters where each character is a jewel. 
You're also given a string S composed of latin characters where each character is a mined stone. You have to find out how many characters of S are in J as well.

Input :
First line contains an integer T denoting the number of test cases. Then follow T test cases. Each test case consists of two lines,
each of which contains a string composed of English lower case and upper characters. First of these is the jewel string J and the second one is stone string S.
You can assume that 1 <= T <= 100, 1 <= |J|, |S| <= 100

Output :
Output for each test case, a single integer, the number of jewels mined.

Example
Input:
4
abc
abcdef
aA
abAZ
aaa
a
what
none

Output:
3
2
1
0

*/

#include <iostream>
using namespace std;

int main()
{
	int T = 0;
	cin >> T;
	
	while(T--)
	{
	    string s1,s2;
	    cin >> s1 >> s2;
	    
	    int ans = 0;
	    
	    for(int i = 0; i < s2.size(); i++)
	    {
	        for(int j = 0; j < s1.size(); j++)
	        {
	            if(s2[i] == s1[j])
	            {
	                ans++;
	                break;
	            }
	        }
	    }
	    
	    cout << ans << endl;
	}
	return 0;
}
