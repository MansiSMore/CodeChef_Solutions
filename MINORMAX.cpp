/*
From a hidden array A of length N, Stack constructs an array B of length N such that:
For all i (1≤i≤N), Bi=max(A1,A2,…,Ai) or Bi=min(A1,A2,…,Ai).
For the given array B of length N, Stack wants you to check whether a possible array A exists or not.

Input Format :
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follow.
The first line of each test case contains an integer N - the length of the array B.
The second line of each test case contains N space-separated integers B1,B2,…,BN representing the array B.

Output Format :
For each test case, output in a single line YES if A exists, otherwise print NO.
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints :
1≤T≤105
1≤N≤105
1≤Bi≤105
Sum of N over all test cases does not exceed 105.

Sample Input 1 :
3
1
343
4
1 1 2 3
3
1 3 2

Sample Output 1 :
YES
YES
NO

Explanation :
Test case 1: The only possible array is A=[343].

Test case 2: One possible array is A=[1,1,2,3]. In this case Bi=max(A1,A2,…,Ai) satisfies for all 1≤i≤4.

Test case 3: It can be proven that there exists no A from which we can obtain the given array B.

Sample Input 2 :
2
5
1 1 1 1 1 
5
1 2 1 2 1

Sample Output 2 :
YES
YES

Explanation :
Test case 1: The only possible array is A=[1,1,1,1,1].

Test case 2: One possible array is A=[1,2,1,1,1]. In this case,

B1=A1
B2=max(A1,A2)
B3=min(A1,A2,A3)
B4=max(A1,A2,A3,A4)
B5=min(A1,A2,A3,A4,A5)

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
        
        ll B_array[N_length];
        
        for(ll i = 0; i < N_length; i++)
        {
            cin >> B_array[i];
        }
        
        ll min = B_array[0], max = B_array[0], cnt = 0;
        for(ll i = 1; i < N_length; i++)
        {
            if(B_array[i] < min)
            {
                min = B_array[i];
            }
            else if(B_array[i] > max)
            {
                max = B_array[i];
            }
            
            if(B_array[i] == min || B_array[i] == max)
            {
                cnt = 0;
            }
            else
            {
                cnt = 1;
                break;
            }
        }
        if(cnt == 0)
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
