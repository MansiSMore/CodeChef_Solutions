/*
Chef has an array A of length N.
In one operation, Chef can remove any one element from the array.
Determine the minimum number of operations required to make all the elements same.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N —the length of Array A.
Next line contains N space-separated integers A1,A2,A3,…,AN - denoting the array A.

Output Format :
For each test case, output the minimum number of operations required to make all the elements same.

Constraints :
1≤T≤4000
1≤N≤105
1≤Ai≤N
Sum of N over all test cases do not exceed 3⋅105

Sample Input 1 :
4
3
3 3 3
6
1 3 2 1 2 2
4
1 2 1 2
5
1 3 2 4 5

Sample Output 1 : 
0
3
2
4

Explanation :
Test case 1: All the elements are already same. Thus we need to perform zero operations.

Test case 2: We remove the elements A1,A2, and A4 using three operations. The array becomes [2,2,2] where all elements are same.

Test case 3: We remove the elements A1 and A3 using two operations. The array becomes [2,2] where all elements are same.

Test case 4: We remove the elements A1,A2,A3, and A4 using four operations. The array becomes [5].
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        unordered_map<ll, ll> uobj;
        ll N_elements = 0, max_freq = 0;
        cin >> N_elements;
        
        ll arr[N_elements];
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            uobj[arr[i]]++;
        }
        
        for(auto x : uobj)
        {
            //cout << x.first << " " << x.second << endl;
            if(x.second >= max_freq)
                max_freq = x.second;
        }
        cout << N_elements - max_freq << endl;
    }
	return 0;
}
