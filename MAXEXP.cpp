/*
You are given a string S of length N, consisting of the digits 0-9 and the characters '+' and '-'. S represents a valid mathematical expression.
Rearrange the characters of S to form a valid mathematical expression such that the result obtained upon evaluating it is maximum.
If there are multiple possible answers, you may print any of them.
Note: A string S of length N is said to be a valid mathematical expression if the following hold:
The first character of S is not + or -.
The last character of S is not + or -.
Any + or - in S must not be adjacent to another + or -.
In particular, numbers are allowed to have leading zeros, and adding/subtracting zero is fine.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 2 lines of input.
The first line of each test case contains a single integer N, denoting the size of the string.
The second line of each test case contains the string S.

Output Format :
For each test case, output on a new line the rearranged string giving the maximum value upon evaluation. 
If there are multiple possible answers, you may print any of them.

Constraints :
1≤T≤1000
3≤N≤105
Each character of S is one of {0,1,2,3,4,5,6,7,8,9,+,−}.
The sum of N across all test cases won't exceed 1.5×106.

Sample Input 1 :
3
7
4-89+20
5
5-9+0
3
9-5

Sample Output 1 :
984+2-0
5+9-0
9-5

Explanation :
Test case 1: The given output expression evaluates to 986, which is the maximum possible.

Test case 2: The given output expression evaluates to 14, which is the maximum possible.

Test case 3: The given output expression evaluates to 4, which is the maximum possible.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_int = 0;
        cin >> N_int;
        
        string S_string;
        cin >> S_string;
        
        sort(S_string.rbegin(), S_string.rend());
        
        vector<char> arr, brr;
        
        for(int i = 0; i < N_int; i++)
        {
            if(S_string[i] >= '0' && S_string[i] <= '9')
            {
                brr.push_back(S_string[i]);
            }
            else
            {
                arr.push_back(S_string[i]);
            }
        }
        
        string res;
        int size1 = arr.size(), size2 = brr.size();
        int temp = size2 - size1;
        //cout << temp;
        int i;
        for(i = 0; i < temp; ++i)
        {
            res += brr[i];
        }
        //cout << res << endl;
        for(int p = size1 - 1, j = i; p >= 0, j < size2; p--, j++)
        {
            res += arr[p];
            res += brr[j];
        }
        cout << res << endl;

        // for(int i = 0, j = 0; i < size2; )
        // {
        //     while(temp--)
        //     {
        //         res += brr[i];
        //         i++
        //     }
        //     cout << arr[j];
        //     j++;
        //     if(temp == 0)
        //     {
        //         cout << brr[i];
        //         i++;
        //     }
            
        // }
        
    }

	return 0;
}
