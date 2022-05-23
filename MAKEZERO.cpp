/*
You are given an array A of length N.
You can perform the following operation on the array any number of times:
Choose any subsequence S of the array A and a positive integer X such that X is a power of 2 and subtract X from all the elements of the subsequence S.
Find the minimum number of operations required to make all the elements of the array equal to 0.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case contains an integer N denoting the length of the array A.
Second line contains N space-separated integers A1,A2,…,AN - denoting the elements of array A.

Output Format :
For each test case, output in a single line, the minimum number of moves required to make all the elements of the array A equal to 0.

Constraints :
1≤T≤1000
1≤N≤105
0≤Ai≤109
Sum of N over all test cases do not exceed 2⋅105.

Sample Input 1 :
4
3
2 2 2
4
2 2 2 4
2
0 0
3
1 2 3

Sample Output 1 :
1
2
0
2

Explanation :
Test Case 1: Take the subsequence with indices {1,2,3} and subtract 21=2 from each element.

Test Case 2: Take the subsequence with indices {1,2,3,4} and subtract 21=2 from each element. After this operation, the array becomes [0,0,0,2]. 
Now, take the subsequence with index {4} and subtract 21=2 from it.

Test Case 3: All the elements are already 0.

Test Case 4: Take the subsequence with indices {2,3} and subtract 21=2 from it. Now, the array becomes [1,0,1]. Now, take the subsequence with indices {1,3} and subtract 20=1 from it.
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
        
        ll arr[32] = {0};
        
        for(ll i = 0; i < N_elements; i++)
        {
            ll temp = 0, j = 0;
            cin >> temp;
            
            while(temp)
            {
                if(arr[j] == 0)
                {
                    arr[j] = temp % 2;
                }
                temp /= 2;
                j++;
            }
        }
        ll ans = 0;
            
        for(int i = 0; i < 32; i++)
        {
            ans += arr[i];
        }
        
        cout << ans << endl;
    }
	return 0;
}
