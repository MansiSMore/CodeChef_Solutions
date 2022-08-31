/*
Let F(S) denote the number of distinct elements in the array S. For example, F([1,2,3,2])=3,F([1,2])=2.
You are given an array A containing N integers. Find if it is possible to divide the elements of the array A into two arrays B and C such that :
Every element of the array A belongs either to array B or to array C.
F(B)=F(C).

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer N — the length of the array A.
The next line contains N space-separated integer A1,A2,…,AN, denoting the elements of the array A.

Output Format :
For each test case, print YES if it is possible to divide the elements of the array A into two arrays B,C satisfying all the conditions and NO otherwise.
You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, 
and YES will all be treated as identical).

Constraints :
1≤T≤104
2≤N≤105
1≤Ai≤N
The sum of N over all test cases won't exceed 2⋅105.

Sample Input 1 :
3
2
1 2
3
1 2 3
4
3 1 1 2

Sample Output 1 :
YES
NO
YES

Explanation :
Test case 1: One possible division is B=[1],C=[2]. Here F(B)=F(C)=1.
Test case 2: There is no way to distribute the elements of the array A=[1,2,3] satisfying all the conditions.
Test case 3: One possible division is B=[3,1],C=[1,2]. Here F(B)=F(C)=2.
*/
#include <iostream>
#include <set>
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
        
        ll arr[N_int] = {0};
        
        for(int i = 0; i < N_int; i++)
        {
            cin >> arr[i];
        }
        set<ll> sobj;
        for(ll x : arr) 
        {
            sobj.insert(x);
        }
        //cout << sobj.size() << "\n";
        if((sobj.size() == N_int) && sobj.size() % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        
    }
	return 0;
}
