/*
You are given N integers {A1,A2,…,AN}. Determine whether they can be reordered such that each pair of consecutive differences differ by a factor of 2.
Formally, determine whether there exists a rearrangement of the given integers into an array [B1,B2,…,BN] such that, for each 2≤i≤N−1, 
at least one of the following two conditions holds:
Bi−Bi−1=2⋅(Bi+1−Bi), or
2⋅(Bi−Bi−1)=Bi+1−Bi
Note that different conditions can hold at different indices — the only restriction is that at each index, 
at least one of the given conditions must hold. Please see the sample tests below for examples.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of two lines of input.
The first line of each test case contains a single integer, N.
The second line of each test case contains N space-separated integers, denoting A1,A2,…,AN.

Output Format :
For each test case, output in a single line the answer — 𝚈𝙴𝚂 if a rearrangement that satisfies the given conditions exists, and 𝙽𝙾 otherwise.
The output is not case sensitive, so for example the strings 𝚈𝙴𝚂, 𝚈𝚎𝚜, 𝚢𝙴𝚂, etc. will all be treated as correct.

Constraints :
1≤T≤100
3≤N≤105
0≤Ai≤109
The sum of N across all test cases won't exceed 105

Sample Input 1 :
4
3
5 2 4
5
2 1 16 8 4
5
97 98 100 96 88
6
16 19 18 21 24 22

Sample Output 1 :
Yes
Yes
No
Yes 

Explanation :
Test case 1: Rearrange the numbers to form [5,4,2]. The consecutive differences are [4−5,2−4]=[−1,−2], and −2=2⋅(−1).

Test case 2: One possible rearrangement is [1,2,4,8,16]. The consecutive differences are consecutive powers of 2.

Test case 3: No rearrangement of the numbers satisfies the condition. 
For example, one rearrangement is [97,98,100,96,88] with consecutive differences [1,2,−4,−8]. 
2 and −4 do not differ by a factor of 2 (they differ by a factor of −2), so this is not a valid arrangement.
*/
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_elements = 0;
        cin >> N_elements;
        
        ll arr[N_elements];
        for(ll i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr, arr + N_elements);
        ll i = 0;
        bool bRet = true;
        for(i = 1; i < N_elements - 1; i++)
        {
            ll dist_1 = arr[i] - arr[i - 1];
            ll dist_2 = arr[i + 1] - arr[i];
            
            if((2 * dist_1) != dist_2 && (2 * dist_2) != dist_1)
            {
                bRet = false;
                break;
            }
        }
        
        if(bRet == false)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
	return 0;
}
