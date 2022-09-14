/*
You are given an array A of N positive integers. Let G be the gcd of all the numbers in the array A.
You have to find if there exist K non-empty, non-intersecting subarrays of A for which the arithmetic mean of the gcd of those K subarrays equals G.
Formally, let g1,g2,…,gK be the gcd of those K chosen subarrays, then, (g1+g2+....+gK)K=G should follow.
If there exist K such subarrays, output YES, otherwise output NO.
Note: Two subarrays are non-intersecting if there exists no index i, such that, Ai is present in both the subarrays.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers — the number of integers in the array A and the integer K, respectively.
The next line contains N space-separated positive integers A1,A2,…,AN, the elements of the array A.

Output Format :
For each test case, if there exist K such subarrays, output YES, otherwise output NO.
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints :
1≤T≤1000
1≤N≤2⋅105
1≤K≤N
1≤Ai≤2⋅105
The sum of N over all test cases won't exceed 4⋅105.

Sample Input 1 :
4
6 4
2 2 3 3 2 2
1 1
1
5 3
1 2 3 4 5
4 3
6 12 18 24

Sample Output 1 :
NO
YES
YES
NO

Explanation :
Test case 1: It is impossible to find 4 non-empty, non-intersecting subarrays which satisfy the given condition.

Test case 2: There is only one element in the array. Here, G=1 and, for the subarray [1], g=1. Thus, it is possible to satisfy the conditions.

Test case 3: Here, G=gcd(1,2,3,4,5)=1. We can choose 3 non-empty, non-intersecting subarrays {[1],[2,3],[4,5]} where gcd(1)=1, gcd(2,3)=1, and gcd(4,5)=1. 
Thus, the arithmetic mean = (1+1+1)3=1. Hence, we can have 3 such subarrays.

Test case 4: It is impossible to find 3 non-empty, non-intersecting subarrays which satisfy the given condition.
*/
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_int = 0, K_int = 0;
        cin >> N_int >> K_int;
        
        ll arrr[N_int] = {0}, G_gcd = 0;
        for(int i = 0; i < N_int; i++)
        {
            cin >> arrr[i];
            G_gcd = __gcd(G_gcd, arrr[i]);
        }
        
        ll temp1 = 0, temp2 = 0;
        for(int i = 0; i < N_int && temp1 < K_int;)
        {
            temp2 = 0;
            for(;i < N_int && temp2 != G_gcd;)
            {
                temp2 = __gcd(temp2, arrr[i]);
                i++;
            }
            if(temp2 == G_gcd)
            {
                temp1++;
            }
        }
        
        if(temp1 == K_int)
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
