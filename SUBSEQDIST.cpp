/*
Chef has an array A of length N.
In one operation, Chef can choose any subsequence of the array and any integer X and then add X to all the elements of the chosen subsequence.
Determine the minimum number of operations required to make all the elements of the array distinct.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N — the length of Array A.
Next line contains N space-separated integers A1,A2,A3,…,AN - denoting the array A.

Output Format :
For each test case, output the minimum number of operations required to make all the elements distinct.

Constraints :
1≤T≤4000
1≤N≤105
1≤Ai≤109
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
1 3 2 4 6

Sample Output 1 :
2
2
1
0

Explanation :
Test case 1:
Operation 1: Choose the subsequence {A1} and add X=1 to the elements. The array becomes A=[4,3,3].
Operation 2: Choose the subsequence {A2} and add X=2 to the elements. The array becomes A=[4,5,3].
Thus, we require, minimum 2 operations to make all the elements distinct.

Test case 2:
Operation 1: Choose the subsequence {A1,A6} and add X=4 to the elements. The array becomes A=[5,3,2,1,2,6].
Operation 2: Choose the subsequence {A3} and add X=5 to the elements. The array becomes A=[5,3,7,1,2,6].
Thus, we require, minimum 2 operations to make all the elements distinct.

Test case 3:
Operation 1: Choose the subsequence {A3,A4} and add X=2 to the elements. The array becomes A=[1,2,3,4].
Thus, we require, minimum 1 operation to make all the elements distinct.

Test case 4: All the elements are distinct. We need zero operations.
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
        unordered_map<ll, int> uobj;
        ll N_elements = 0;
        int cnt = INT_MIN;
        cin >> N_elements;
        
        ll arr[N_elements] = {0};
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            uobj[arr[i]]++;
        }
        
        for(auto x : uobj)
        {
            cnt = max(cnt, x.second);
        }
        
        if(cnt == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ceil(log2(cnt)) << endl;
        }
        //cout << cnt << endl;
    }
	return 0;
}
