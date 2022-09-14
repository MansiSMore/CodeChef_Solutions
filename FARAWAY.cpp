/*
Chef has an array A of size N and an integer M, such that 1≤Ai≤M for every 1≤i≤N.
The distance of an array B from array A is defined as:
d(A,B)=∑i=1N|Ai−Bi|
Chef wants an array B of size N, such that 1≤Bi≤M and the value d(A,B) is as large as possible, i.e, the distance of B from A is maximum.
Find the maximum distance for any valid array B.
Note: |X| denotes the absolute value of an integer X. For example, |−4|=4 and |7|=7.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers N and M — the length of array A and the limit on the elements of A and B.
The second line contains N space-separated integers A1,A2,…,AN.

Output Format :
For each test case, output on a new line the maximum distance of an array from A.

Constraints :
1≤T≤105
1≤N≤2⋅105
1≤M≤109
1≤Ai≤M
The sum of N over all test cases won't exceed 3⋅105.

Sample Input 1 :
4
2 6
3 5
4 1
1 1 1 1
5 7
2 3 4 5 6
7 24
23 7 6 16 12 4 24

Sample Output 1 :
7
0
21
127

Explanation :
Test case 1: The array having maximum distance from A is B=[6,1]. Thus the distance is |3−6|+|5−1|=3+4=7.

Test case 2: The only array possible is B=[1,1,1,1]. The distance of this array from A is 0.

Test case 3: One of the possible arrays having maximum distance from A is B=[7,7,1,1,1]. Thus the distance is |2−7|+|3−7|+|4−1|+|5−1|+|6−1|=5+4+3+4+5=21.
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
        ll N_elements = 0, M_int = 0;
        cin >> N_elements >> M_int;
        
        ll arr[N_elements] = {0};
        
        ll ans = 0;
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            if(arr[i] <= (M_int / 2))
            {
                ans += abs(M_int - arr[i]);
                //cout << ans << endl;
            }
            else
            {
                ans += abs(arr[i] - 1);
            }
        }
        
        cout << ans << endl;
    }
	return 0;
}
