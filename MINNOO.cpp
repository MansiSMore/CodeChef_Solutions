/*
Your teacher gave you an assignment — given an integer N, construct a binary string B=b1b2b3…bN of length N such that:
max(bi,bi+1)=1
for every i from 1 to N−1.
What is the minimum number of 1's such a binary string can contain?
Note: A binary string is a string consisting of only the digits 0 and 1.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case contains a single integer N — the length of binary string you'd like to construct.

Output Format :
For each test case, output on a new line the minimum number of 1's required to complete the assignment.

Constraints :
1≤T≤1000
2≤N≤1000

Sample Input 1 :
6
6
8
2
3
5
100

Sample Output 1 :
3
4
1
1
2
50

Explanation :
Test case 1: One possible binary string is 𝟶𝟷𝟶𝟷𝟶𝟷. This has three 1's, and it can be verified that the maximum of any two adjacent characters is 1.
Achieving this with less than three 1's is not possible.

Test case 2: One possible binary string is 𝟷𝟶𝟷𝟶𝟷𝟶𝟷𝟶. This has four 1's, and it can be verified that the maximum of any two adjacent characters is 1.
Achieving this with less than four 1's is not possible.

Test case 3: One possible binary string is 𝟷𝟶. This has one 1, and it can be verified that the maximum of any two adjacent characters is 1.

Test case 4: One possible binary string is 𝟶𝟷𝟶. This has one 1, and it can be verified that the maximum of any two adjacent characters is 1.
*/

#include <iostream>
using namespace std;
#define ll long long
int main() {
    
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_length = 0;
        cin >> N_length;
        
        cout << N_length / 2 << endl;
    }
	return 0;
}
