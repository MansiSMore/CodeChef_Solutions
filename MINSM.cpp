/*
You are given an array A1,A2,…,AN of length N. You can perform the following operation any number of times (possibly 0 times) :
Choose any two indices i and j and replace either Ai or Aj with gcd(Ai,Aj).
Find the minimum possible sum (ie. A1+A2+⋯+AN) that you can achieve, and output that.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains an integer N - the length of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN.​

Output Format :
For each test case, output on a new line the minimum sum of the array that can be achieved.

Constraints :
1≤T≤100
2≤N≤105
1≤Ai≤109
The sum of N over all test cases won't exceed 3∗105.

Sample Input 1 :
2
2
5 10
3
2 2 6

Sample Output 1 :
10
6

Explanation
Test case 1: Choose i=1,j=2 and replace A2 with gcd(5,10)=5.
Test case 2: Choose i=1,j=3 and replace A3 with gcd(2,6)=2.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long 
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_length = 0, ans = 0;
        cin >> N_length;
        vector<ll> vobj(N_length);
        
        for(int i = 0; i < N_length; i++)
        {
            cin >> vobj[i];
            ans = __gcd(ans, vobj[i]);
        }
        
        cout << ans * N_length << endl;
        
    }
    
    return 0;
}
