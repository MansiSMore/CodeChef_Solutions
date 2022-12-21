/*
You are given two binary strings A and B, each of length N. You can perform the following operation on string A any number of times:
Select a prime number X.
Choose any substring of string A having length X and reverse the substring.
Determine whether you can make the string A equal to B using any (possibly zero) number of operations.
A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the length of the strings A and B.
The second line contains the binary string A.
The third line contains the binary string B.

Output Format :
For each test case, output on a new line, YES, if you can make the string A equal to B using any number of operations and NO otherwise.
You can print each character in uppercase or lowercase. For example, YES, yes, Yes, and yES are all identical.

Constraints :
1≤T≤100
1≤N≤105
Ai and Bi contain 0 and 1 only.
The sum of N over all test cases won't exceed 105.

Sample Input 1 :
4
2
00
00
4
1001
0111
5
11000
10010
5
11000
11010

Sample Output 1 :
YES
NO
YES
NO

Explanation :
Test case 1: Both the strings are equal. Thus, we do not need any operations.

Test case 2: It can be shown that we cannot make the string A equal to B using any number of operations.

Test case 3: Choose X=3 and reverse the substring A[2,4]=100. Thus, the string A becomes 10010 which is equal to B.

Test case 4: It can be shown that we cannot make the string A equal to B using any number of operations.
*/

#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
int main() {
	ll T_testcases = 0;
	cin >> T_testcases;
	
	while(T_testcases--)
	{
	    ll N_length = 0;
	    cin >> N_length;
	    string A_str, B_str;
	    cin >> A_str >> B_str;
	    
	    sort(A_str.begin(), A_str.end());
	    sort(B_str.begin(), B_str.end());
	    
	    if(A_str == B_str)
	    {
	        cout << "YES\n";
	    }
	    else
	    {
	        cout << "NO\n";
	    }
	    
	}
	return 0;
}
