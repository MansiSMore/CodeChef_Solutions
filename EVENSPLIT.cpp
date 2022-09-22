/*
You are given a binary string S of length N. You can perform the following operation on it:
Pick any non-empty even-length subsequence of the string.
Suppose the subsequence has length 2k. 
Then, move the first k characters to the beginning of S and the other k to the end of S (without changing their order).
For example, suppose S=01100101110. Here are some moves you can make (the chosen subsequence is marked in red):
01100101110→10101011100
01100101110→10010111001
01100101110→00100111110
What is the lexicographically smallest string that can be obtained after performing this operation several (possibly, zero) times?
Note: A binary string A is said to be lexicographically smaller than another binary string B of the same length if there exists an index i such that:
A1=B1,A2=B2,…,Ai−1=Bi−1
Ai=0 and Bi=1.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of string S.
The second line contains a binary string of length N.

Output Format :
For each testcase, 
output a single line containing the lexicographically shortest binary string that can be obtained by performing the given operation several times.

Constraints :
1≤T≤105
1≤N≤2⋅105
S is a binary string, i.e, contains only the characters 0 and 1.
The sum of N across all test cases won't exceed 2⋅105.

Sample Input 1 :
4
2
10
4
1001
5
11111
7
0010100

Sample Output 1 :
10
0011
11111
0000011

Explanation :
Test case 1: There's only one move possible, and it gives back the original string when made. So, S cannot be changed, and the answer is 10.

Test case 2: Make the following moves:
1001→0101
0101→0011
This is the lexicographically smallest string.

Test case 3: Performing any move doesn't change the string.

Test case 4: Make the move 0010100→0000011.
*/

#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_elements = 0;
        cin >> N_elements;
        
        string S_binary;
        cin >> S_binary;
        int iCnt1 = 0, iCnt2 = 0;
        if(S_binary == "10")
        {
            cout << "10\n";
            continue;
        }
        
        
        for(int i = 0; i < N_elements; i++)
        {
            if(S_binary[i] == '0')
            {
                iCnt1++;
            }
            else
            {
                iCnt2++;
            }
        }
        //cout << iCnt2 << endl;
        string res;
        for(int i = 0; i < iCnt1; i++)
        {
            res += '0';
        }
        for(int i = iCnt1; i < N_elements; i++)
        {
            res += '1';
        }
        cout << res << endl;
    }
	return 0;
}
