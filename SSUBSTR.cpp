/*
You have a binary string S. You can perform the following operation on S:
Select any substring SL…R (1≤L≤R≤|S|) which is sorted in non-decreasing order and remove it from S. 
(Both the left and right halves are concatenated after performing the operation)
For e.g. if S=100011000, we can perform the following operation: 100011⎯⎯⎯⎯⎯⎯000→100000
Find the minimum number of operations required so that the final binary string S is sorted in non-decreasing order.
Note that a substring is formed by deleting some (possibly zero) characters from the beginning and some (possibly zero) 
characters from the end of the string.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the length of the binary string S.
The second line of each test case contains a binary string S of length N containing 0s and 1s only.

Output Format :
For each test case, output the minimum number of operations required so that the final binary string S is sorted in non-decreasing order.

Constraints :
1≤T≤105
1≤N≤105
S contains 0 and 1 only.
The sum of N over all test cases won't exceed 2⋅105.

Sample Input 1 :
3
3
000
5
01110
2
10

Sample Output 1 :
0
1
1

Explanation :
Test case 1: The binary string is already sorted, so we need no operations.

Test case 2: We can use one operation to remove the sorted substring S2…4=111. Thus, the remaining string 00 is sorted.

Test case 3: We can use one operation to remove the sorted substring S2…2=0. Thus, the remaining string 1 is sorted.
*/

#include <iostream>
using namespace std;

#define ll long long
int main() {

    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_elements = 0;
        cin >> N_elements;
        
        string S_str;
        cin >> S_str;
        
        int cnt = 0;
        for(int i = 0; i < N_elements - 1; i++)
        {
            if(S_str[i] == '1' && S_str[i + 1] == '0')
                cnt++;
        }
        cout << cnt << endl;
    }
	return 0;
}
