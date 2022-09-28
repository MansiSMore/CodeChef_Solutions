/*
Chef has an array A of length N. In one operation, Chef can choose any element Ai and split it into two positive integers X and Y such that X+Y=Ai.
Note that the length of array increases by 1 after every operation.
Determine the minimum numbers of operations required by Chef to make parity of all the elements same.
It is guaranteed that parity of all the elements can be made equal after applying the above operation zero or more times.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N — the length of array A.
Next line contains N space-separated integers A1,A2,A3,…,AN - denoting the array A.

Output Format :
For each test case, output the minimum number of operations required to make parity of all elements same.

Constraints :
1≤T≤4000
1≤N≤105
1≤Ai≤109
Sum of N does not exceed 2⋅105

Sample Input 1 :
2
4
1 3 5 7
3
1 2 3

Sample Output 1 :
0
1

Explanation :
Test case 1: All the elements have the same parity since all are odd. Thus, we need zero operations.

Test case 2: In one operation, we can split the element A2=2 to X=1 and Y=1 such that X+Y=2. 
Thus, the array now becomes A=[1,1,1,3]. All the elements have the same parity since all are odd. Thus, we need only one operation.
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
        ll N_elements = 0;
        cin >> N_elements;
        
        ll arr[N_elements], Even_cnt = 0, Odd_cnt = 0;
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
                Even_cnt++;
            else
                Odd_cnt++;
        }
        
        if(Odd_cnt == N_elements || Even_cnt == N_elements)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << Even_cnt << endl;
        }
    }
	return 0;
}
