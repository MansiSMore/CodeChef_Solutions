/*
You are given a binary string S=S1S2…SN of length N. You are also given an integer K. You can do the following operation at most N−K+1 times:
First, choose a substring SiSi+1…Si+K−1 of S of length exactly K. This substring shouldn't have been chosen in any of the previous operations. 
That is, the same starting index of the substring can't be chosen twice.
Then, flip all the characters of the chosen substring (i.e. change every 0 to 1 and vice versa).
Find the lexicographically smallest string possible after the operations if you do them in an optimal way.

Note:
A substring is consecutive elements of a string. For eg. in the string "01011", "101" is a substring, but "111" is not a substring.
A string A is lexicographically smaller than string B, if Ai<Bi, where i is the first index where A and B differ.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains two space-separated integers: N, K.
The second line of each test case contains the string S.

Output Format :
For each test case, output on a new line the lexicographically smallest string that you can achieve.

Constraints :
1≤T≤100
1≤N≤105
1≤K≤N
Each element of S is either 0 or 1
The sum of N over all test cases won't exceed 3×105.

Sample Input 1 :
4
3 2
101
4 2
1011
5 3
01010
5 2
01010

Sample Output 1 :
000
0001
00011
00000

Explanation :
Test case 1: Choose the substring 101 and flip it. So now S becomes 110. Then choose the substring 110 and flip it. So now S becomes 000. 
This is the lexicographically smallest string that can be achieved, and hence this is the answer.

Test case 2: Choose the substring 1011 and flip it. So now S becomes 1101. Then choose the substring 1101 and flip it. So now S becomes 0001. 
This is the lexicographically smallest string that can be achieved, and hence this is the answer.

Test case 3: Choose the substring 01010 and flip it. So now S becomes 00100. Then choose the substring 00100 and flip it. So now S becomes 00011. 
This is the lexicographically smallest string that can be achieved, and hence this is the answer.

Test case 4: Choose the substring 01010 and flip it. So now S becomes 01100. Then choose the substring 01100 and flip it. So now S becomes 00000. 
This is the lexicographically smallest string that can be achieved, and hence this is the answer.
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
        ll N_length = 0, K_length = 0;
        cin >> N_length >> K_length;
        
        ll temp = 0;
        char S_str[N_length];
        int arr[N_length] = {0};
        for(int i = 0; i < N_length; i++)
        {
            cin >> S_str[i];
        }
        for(int i = 0; i < N_length - K_length + 1; i++)
        {
            if((S_str[i] + temp) % 2 == 1)
            {
                temp++;
                arr[i + K_length - 1] = 1;
            }
            temp -= arr[i];
            S_str[i] = 48;
        }
        for(int i = N_length - K_length + 1; i < N_length; i++)
        {
            S_str[i] = 48 + (S_str[i] + temp) % 2;
            temp -= arr[i];
        }
        for(int i = 0; i < N_length; i++)
        {
            cout << S_str[i];
        }
        cout << endl;
        
    }
	return 0;
}
