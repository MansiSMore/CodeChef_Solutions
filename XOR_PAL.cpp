/*
You are given a binary string A of length N.
You can perform the following type of operation on the string A:
Choose two different indices i and j (1≤i,j≤N);
Change Ai and Aj to Ai⊕Aj. Here ⊕ represents the bitwise XOR operation.
Find the minimum number of operations required to convert the given string into a palindrome.

Input Format :
First line of the input contains T, the number of test cases. Then the test cases follow.
First line of each test case contains an integer N denoting the size of the string.
Second line of each test case contains a binary string A of length N containing 0s and 1s only.
Output Format :
For each test case, print the minimum number of operations required to make the string a palindrome.

Constraints :
1≤T≤1000
1≤N≤2⋅105
Sum of N over all test cases does not exceeds 2⋅105.

Sample Input 1 :
2
5
11011
7
0111010
Sample Output 1 :
0
1
Explanation :
Test Case 1 : The given string 11011 is already a palindrome. So, no operation is required. The answer for the case is 0.

Test Case 2 : The given string 0111010 is not a palindrome.

Choose the indices i=3 and j=5. Now, A3⊕A5=1⊕0=1. Thus, we set A3 and A5 equal to 1.
After the operation, the resulting string is 0111110 which is a palindrome. The number of operations required is 1.
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
        ll N_length = 0;
        cin >> N_length;
        
        string str;
        cin >> str;
        
        ll i = 0, j = N_length - 1, cnt = 0;
        
        while(i < j)
        {
            //cout << (str[i] - '0') ^ (str[j] - '0');
            // if((str[i] - '0') ^ (str[j] - '0') == 1)
             if(str[i] != str[j])
            {
                cnt++;
            }
    
            i++, j--;
        }
        cout << (cnt + 1) / 2 << endl;
    }
	return 0;
}
