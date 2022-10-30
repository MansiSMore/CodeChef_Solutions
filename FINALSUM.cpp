/*
Chef has an array A of length N. In one operation, Chef can:
Choose any subarray [L,R] (1≤L≤R≤N);
Add 1 to AL, subtract 1 from AL+1, add 1 to AL+2, subtract 1 from AL+3 and so on, till AR.
Chef performed Q such operations where the ith operation was performed on the subarray [Li,Ri].
Determine the final sum of the array after these Q operations.
Note that a subarray is formed by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the array.

Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two integers N,Q, number of elements and the number of queries.
The next line contains N space-separated integers A1,A2,…AN - denoting the array A.
The next Q lines contains two space-separated integers with ith line containing Li,Ri.

Output Format:
For each test case, output the final sum of the array after performing all the Q operations.

Constraints:
1≤T≤1000
1≤N,Q≤3⋅105
1≤Ai≤100
The sum of N over all test cases won't exceed 3⋅105.
The sum of Q over all test cases won't exceed 3⋅105.

Sample Input 1 :
2
5 3
1 3 4 4 2
1 5
3 4
2 2
1 2
4
1 1
1 1

Sample Output 1 :
16
6

Explanation :
Test case 1: The queries are as follows:
Query 1: The chosen subarray is [1,3,4,4,2] which changes to [1+1,3−1,4+1,4−1,2+1]=[2,2,5,3,3]. Thus, the array becomes [2,2,5,3,3].
Query 2: The chosen subarray is [5,3] which changes to [5+1,3−1]=[6,2]. Thus, the array becomes [2,2,6,2,3].
Query 3: The chosen subarray is [2] which changes to [2+1]=[3]. Thus, the array becomes [2,3,6,2,3].
The sum of final array is 2+3+6+2+3=16.

Test case 2: The queries are as follows:
Query 1: The chosen subarray is [4] which changes to [4+1]=[5]. Thus, the array becomes [5].
Query 2: The chosen subarray is [5] which changes to [5+1]=[6]. Thus, the array becomes [6].
The sum of final array is 6.
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
        ll N_elements = 0, Q_queries = 0;
        cin >> N_elements >> Q_queries;
        
        ll arr[N_elements] = {0};
        ll sum = 0;
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        
        while(Q_queries--)
        {
            ll L_index = 0, R_index = 0;
            cin >> L_index >> R_index;
            
            if((R_index - L_index) % 2 == 1)
                continue;
            else
            {
                sum++;
            }   
        }
        cout << sum << endl;
    }
	return 0;
}
