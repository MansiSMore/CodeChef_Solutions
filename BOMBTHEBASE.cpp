/*
In Chefland, there are N houses numbered from 1 to N, ith house has a defence system having strength Ai.
Chef suspects a bomb drop on one of the houses very soon. 
A bomb with attack strength X can destroy the ith house, if the defence system of the ith house Ai, is strictly less than X.
Also, when the ith house is destroyed due to the bomb, all houses with indices j such that 1≤j<i get destroyed as well irrespective of their defence system.
Given one bomb with attack strength X, find the maximum number of houses that can get destroyed.

Input Format :
The first line will contain T - the number of test cases. Then the test cases follow.
First line of each test case contains 2 integers N,X.
Second line of test case contains N space separated integers A1,A2,…,AN.

Output Format :
For each test case, output in a single line the maximum number of houses that can get destroyed if the bomb can hit any house.

Constraints :
1≤T≤100
1≤N≤105
1≤X≤109
1≤Ai≤109
Sum of N over all test cases does not exceed 105

Sample Input 1 :
2
8 6
4 1 6 1 6 5 6 8
2 1
3 5

Sample Output 1 :
6
0

Explanation :
Test Case 1: The bomb can only destroy houses 1,2,4, and 6.
If it hits house 1, only house 1 is destroyed.
If it hits house 2, houses 1 and 2 are destroyed.
If it hits house 4, houses 1,2,3 and 4 are destroyed.
If it hits house 6, houses 1,2,3,4,5, and 6 are destroyed.
The maximum number of destroyed houses is 6.

Test Case 2: The bomb cannot destroy any of the houses as the defence system of each house is not lesser than attack power of bomb. 
Thus, the total number of destroyed houses is 0.
*/
#include <iostream>
using namespace std;

int main() 
{
    long T = 0;
    cin >> T;
    
    while(T--)
    {
        long N = 0, X = 0, ans = 0;
        cin >> N >> X;
        
        int arr[N];
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        
        for(int i = 0; i < N; i++)
        {
            if(arr[i] < X)
                ans = i + 1;
        }
        
        std::cout << ans << std::endl;
        
    }
	return 0;
}
