/*
Stack likes the number 3 a lot.
He has two non-negative integers A and B.
In one operation, Stack can do either of the following:
A:=|A−B| (change A to |A−B|)
B:=|A−B| (change B to |A−B|)
Note that |X| denotes absolute value of X. For example |−7|=7 and |4|=4.
Find the minimum number of operations after which at least one integer out of A and B becomes divisible by 3.

Input Format :
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The only line of each test case contains two integers A and B.

Output Format :
For each test case, output in a single line the minimum number of operations after which at least one integer out of A and B becomes divisible by 3.

Constraints :
1≤T≤105
0≤A,B≤109

Sample Input 1 :
2
0 343
1 1

Sample Output 1 :
0
1

Explanation :
Test case 1: A=0 is already divisible by 3.

Test case 2: In the only operation, Stack can change A=1 to A=|A−B|=|1−1|=0. Now A=0 is divisible by 3.
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
        ll A_number = 0, B_number = 0, cnt = 0;
        cin >> A_number >> B_number;
        
        if(A_number == 0 || B_number == 0)
        {
            cout << cnt << endl;
            continue;
        }
        while((A_number % 3 != 0) && (B_number % 3 != 0))
        {
            ll diff = abs(A_number - B_number);
            
            if(A_number > B_number)
            {
                A_number = diff;
            }
            else
            {
                B_number = diff;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
	return 0;
}
