/*
Chef is interested in the sum of GCDs of all prefixes of a permutation of the integers {1,2,…,N}.
Formally, for a permutation P=[P1,P2,…,PN] of {1,2,…,N}, let us define a function Fi=gcd(A1,A2,A3,…,Ai). 
Chef is interested in the value of F1+F2+…+FN.
Now, Chef wants to find a permutation of {1,2,…,N} which has the given sum equal to X. 
Please help Chef find one such permutation. 
In case there is no such permutation, print −1. 
In case of multiple answers, any of them will be accepted.
A permutation of {1,2,…,N} is a sequence of numbers from 1 to N in which each number occurs exactly once.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing two space separated integers N and X denoting the length of required permutation and the required sum of GCDs of all prefixes respectively.

Output Format :
If there is a valid permutation that satisfies the required condition, then:
In a single line, output N space-separated integers denoting the required permutation permutation.
If there is no permutation, print −1 in a single line.

Constraints :
1≤T≤104
1≤N≤1000
1≤X≤2⋅N−1
The sum of N over all test cases won't exceed 3⋅105.

Sample Input 1 :
4
1 1
2 1
4 6
3 5

Sample Output 1 :
1
-1
2 4 3 1
3 2 1

Explanation :
Test case 1: The only possible permutation has a sum of 1, as required.

Test case 2: The two permutations of length 2 are:
[1,2] with a value of 1+1=2
[2,1] with a value of 2+1=3
None of them have a sum of X=1, so we output −1.

Test case 3: For P=[2,4,3,1], we have:
F1=2
F2=gcd(2,4)=2
F3=gcd(2,4,3)=1
F4=gcd(2,4,3,1)=1
The sum of these values is 6, as required.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_number = 0, X_reqsum = 0;
        cin >> N_number >> X_reqsum;
        
        if(X_reqsum < N_number)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << X_reqsum - N_number + 1 << " ";
            for(int i = 1; i <= N_number; i++)
            {
                if(i != X_reqsum - N_number + 1)
                {
                    cout << i << " ";
                }
            }
            cout << endl;

        }
    }
	return 0;
}
