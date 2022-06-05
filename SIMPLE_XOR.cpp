/*
You are given two integers L and R(L+3≤R). Output any four distinct integers between L and R (inclusive) such that their bitwise XOR is zero.
More formally, output any four integers a1,a2,a3,a4 such that:
a1⊕a2⊕a3⊕a4=0
L≤a1,a2,a3,a4≤R
ai=aj if and only if i=j
If more than one such quadruple exists, you may output any of them. If no such quadruple exists, print −1 instead.

Input Format :
The first line of input will contain a single integer T, the number of test cases. The description of the test cases follows.
Each test case consists of a single line of input, containing two space-separated integers L,R.

Output Format :
For each testcase, output any four distinct integers between L and R such that their bitwise XOR is zero, 
or output −1 in case no such quadruple of four distinct integers exists.

Constraints :
1≤T≤1000
1≤L,R≤109
L+3≤R, so there are at least four distinct integers in the range.

Sample Input 1 :
2
1 4
1 100

Sample Output 1 :
-1
3 6 9 12

Explanation :
Test case 1: There are only four integers in the range and their bitwise XOR is not zero. 1⊕2⊕3⊕4=4

Test case 2: There are many possible answers in this case. One of them is provided above: 3,6,9,12. It can be verified that 3⊕6⊕9⊕12=0.
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
        ll L_low = 0, R_high = 0;
        cin >> L_low >> R_high;
        
        if(L_low % 2 != 0)
        {
            L_low += 1;
        }
        if(L_low % 2 == 0 && L_low + 3 <= R_high)
        {
            cout << L_low << " " << L_low + 1 << " " << L_low + 2 << " " << L_low + 3 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
	return 0;
}
