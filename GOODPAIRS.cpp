/*
You are given arrays A and B of length N each. Determine the number of good pairs.
A pair (i,j) (1≤i,j≤N) is said to be good if all of the following conditions are satisfied:
i<j;
Ai=Bj;
Aj=Bi;

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
Description of each test case:
First line contains an integer N - denoting the length of the arrays.
Second line contains N space-separated integers A1,A2,…AN - denoting the array A.
Third line contains N space-separated integers B1,B2,…BN - denoting the array B.

Output Format :
For each test case, output the number of good pairs.

Constraints :
1≤T≤1000
2≤N≤105
1≤Ai,Bi≤109
Sum of N over all test cases does not exceed 2⋅105.

Sample Input 1 :
4
3
1 2 3
3 2 1
4
1 2 3 4
5 6 6 7
3
10 10 10
10 10 10
4
4 8 1 1
8 4 1 1

Sample Output 1 :
1
0
3
2

Explanation :
Test Case 1: The only good pair (i,j) is (1,3). Here,
1<3
A1=1 and B3=1. Thus, A1=B3.
A3=3 and B1=3. Thus, A3=B1.

Test Case 2: There are no good pairs.

Test Case 3: There are 3 good pairs (i,j). These are (1,2),(1,3), and (2,3).

Test Case 4: There are 2 good pairs (i,j). These are (1,2) and (3,4).
*/
#include <iostream>
#include <utility>
#include <map>

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
        
        ll arr[N_elements], brr[N_elements];
        for(ll i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
        }
        
        for(ll i = 0; i < N_elements; i++)
        {
            cin >> brr[i];
        }
        
        ll cnt = 0;
        // for(ll i = 0; i < N_elements - 1; i++)
        // {
        //     for(ll j = i + 1; j < N_elements; j++)
        //     {
        //         if(arr[i] == brr[j] && brr[i] == arr[j])
        //         {
        //             cnt++;
        //         }
        //     }
        // }
        
        map<pair<int, int>, int> uobj;
        for(ll i = 0; i < N_elements ; i++)
        {
            cnt += uobj[{arr[i], brr[i]}];
            uobj[{brr[i], arr[i]}]++;
            
        }
        
        cout << cnt << endl;
    }
	return 0;
}
