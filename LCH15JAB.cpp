/*
This is a very easy warm-up problem.
You are given a string. 
Your task is to determine whether number of occurrences of some character in the string is equal to the sum of the numbers of occurrences of other characters 
in the string. 

Input :
The first line of the input contains an integer T denoting the number of test cases. Each of the next T lines contains one string S consisting of lowercase 
latin letters.

Output :
For each test case, output a single line containing "YES" if the string satisfies the condition given above or "NO" otherwise.

Constraints :
1 ≤ T ≤ 1000
1 ≤ length of S ≤ 50

Subtasks :
Subtask #1[28 points]: S contains no more than 2 different letters.
Subtask #2[72 points]: No additional conditions

Example
Input:
4
acab
zzqzqq
abc
kklkwwww

Output:
YES
YES
NO
YES

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int T = 0;
	cin >> T;
	while(T--)
	{
	    string str;
	    cin >> str;
	    vector<int> vobj(26,0);
	    
	    for(int i = 0; i < str.size(); i++)
	    {
	        vobj[str[i] - 'a']++;
	    }
	    
	    int max_ele = *max_element(vobj.begin(), vobj.end());
	    int sum = 0;
	    for(int i = 0; i < vobj.size(); i++)
	    {
	        sum += vobj[i];
	    }
	    if(sum - max_ele == max_ele)
	        cout << "YES\n";
	    else 
	        cout << "NO\n";
	}
	
	return 0;
}
