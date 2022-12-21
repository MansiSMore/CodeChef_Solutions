/*
Chef has a binary string S of size N. Chef can perform the following operation on the string:
Select any substring of size 3 and reverse it.
Find the minimum distance between any two 1s Chef can achieve, by applying the above operation any (possibly zero) number of times.
Note:
The distance between two characters Si and Sj is defined as abs(i−j).
It is guaranteed that the string contains at least two occurrences of 1.
A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.
Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the number of characters in the string.
The next line contains a binary string of length N.
Output Format :
For each test case, output on a new line, the minimum distance between any two 1s Chef can achieve, 
by applying the above operation any (possibly zero) number of times.

Constraints :
1≤T≤1000
2≤N≤105
Si contains 0 and 1 only.
It is guaranteed that S contains at least two occurrences of 1.
The sum of N over all test cases won't exceed 2⋅105.

Sample Input 1 :
3
2
11
3
101
7
0100101

Sample Output 1 :
1
2
1

Explanation :
Test case 1: There are only two 1s in the string. The distance between the 1s is 2−1=1.
Test case 2: The distance between the given 1s is 3−1=2. 
It can be shown that we cannot achieve a distance smaller than 2 by applying any number of operations.

Test case 3: Chef can perform the following operation:
Select the substring S[2,4]=100 and reverse it. Thus, the string becomes S=0001101. The minimum distance between the 1s in the string is 5−4=1.
It can be shown that we cannot achieve a distance smaller than 1 by applying any number of operations.
*/

#include <iostream>
#include <vector>
using namespace std;

#define ll long long
int main() {
	ll T_testcases = 0;
	cin >> T_testcases;
	
	while(T_testcases--)
	{
	    ll N_length = 0;
	    cin >> N_length;
	    
	    string str;
	    cin >> str;
	    
	    vector<int> vobj;
	    bool bret = false;
	
	    int i = 0, j = 0;
	    for(i = 0; i < N_length; i++)
	    {
	        if(str[i] == '1')
	        {
	           vobj.push_back(i);
	        }
	    }
	    j = vobj.size() - 1;
	    int ele = vobj[j];
	    
	    
	    for(int k = 0; k <= j; k++)
	    {
	        if((ele - vobj[k]) % 2 == 1)
	        {
	            bret = true;
	            break;
	        }
	    }
	    if(bret == false)
	    {
	        cout << 2 << endl;
	    }
	    else
	    {
	        cout << 1 << endl;
	    }
	}
	return 0;
}
