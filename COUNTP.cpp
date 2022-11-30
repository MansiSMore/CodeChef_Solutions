/*
You are given an array A=[A1,A2,…,AN].
Is it possible to partition A into two non-empty subsequences S1 and S2 such that sum(S1)×sum(S2) is odd?
Here, sum(S1) denotes the sum of elements in S1, and sum(S2) is defined similarly.
Note: S1 and S2 must partition A, that is:
S1 and S2 must be non-empty
Every element of A must be in either S1 or S2
S1 and S2 must be disjoint (in terms of which indices their subsequences represent)

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 2 lines of input.
The first line of each test case contains a single integer N, the size of the array.
The next line contains N space-separated integers A1,A2,…,AN: the elements of the array.

Output Format :
For each test case, print on a new line the answer: YES if the array can be partitioned into two subsequences satisfying the condition, and NO otherwise.
Each character of the output may be printed in either uppercase or lowercase, i.e, YES, yes, YEs, and yEs will all be treated as equivalent.

Constraints :
1≤T≤105
2≤N≤105
1≤Ai≤109
The sum of N across all test cases won't exceed 106.

Sample Input 1 :
4
4
1 1 2 2
6
1 2 4 6 8 10
2
3 5
3
1 3 5

Sample Output 1 :
YES
NO
YES
NO

Explanation :
Test case 1: We have A=[1⎯⎯,1,2⎯⎯,2]. Let S1 be the underlined elements and S2 be the other ones. sum(S1)×sum(S2)=3×3=9.

Test case 2: It can be proved that no partition of A into S1,S2 satisfies the condition.

Test case 4: Choose S1={3},S2={5}.

Test case 4: It can be proved that no partition of A into S1,S2 satisfies the condition.
*/
#include <iostream>
using namespace std;

#define ll long long
int main() {
    
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_elements = 0;
        cin >> N_elements;
        
        ll arr[N_elements] = {0};
        ll oddCount = 0, evenCount = 0;
        
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 1)
                oddCount++;
            else
                evenCount++;
        }
        
        if(oddCount % 2 == 1 || oddCount == 0)
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
