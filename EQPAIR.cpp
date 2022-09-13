/*
You are given an array A of length N.
A pair (i,j) (1≤i<j≤N) is said to be good if gcd(Ai,Aj)=lcm(Ai,Aj). Here gcd denotes the greatest common divisor and lcm denotes least common multiple.
Find the total number of good pairs present in the given array.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains an integer N - the length of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN.

Output Format :
For each test case, output on a new line the total number of such good pairs possible in the given array.

Constraints :
1≤T≤100
1≤N≤105
1≤Ai≤109
The sum of N over all test cases won't exceed 3⋅105.

Sample Input 1 :
5
2
5 9
5
1 5 5 5 9
8
2 5 5 2 9 9 9 12
4
12 12 18 18
5
12 15 10 5 9

Sample Output 1 :
0
3
5
2
0

Explanation :
Test case 1: No good pair is present.
Test case 2: The good pairs (i,j) are: (2,3),(3,4), and (2,4). To elaborate, gcd(A2,A3)=lcm(A2,A3)=5.
Test case 3: The good pairs (i,j) are: (1,4),(2,3),(5,6),(6,7), and (5,7). To elaborate, gcd(A1,A4)=lcm(A1,A4)=2.
Test case 4: The good pair (i,j) are: (1,2), and (3,4). To elaborate, gcd(A3,A4)=lcm(A3,A4)=18.
Test case 5: No good pair is present.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_elements = 0;
        cin >> N_elements;
        
        ll arr[N_elements] = {0};
        unordered_map<ll, ll> uobj;
        for(ll i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            uobj[arr[i]]++;
        }
        ll ans = 0;
        
        for(auto x : uobj)
        {
            ll temp = x.second;
            ans += (temp * (temp - 1)) / 2;
        }
        cout << ans << endl;
        
    }
	// your code goes here
	return 0;
}
