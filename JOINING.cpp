/*
N candidates (numbered from 11 to NN) join Chef's firm. 
The first 55 candidates join on the first day, and then, on every subsequent day, the next 55 candidates join in.
For example, if there are 1212 candidates, 
candidates numbered 11 to 55 will join on day 11, candidates numbered 66 to 1010 on day 22 and the remaining 22 candidates will join on day 33.
Candidate numbered KK decided to turn down his offer and thus, Chef adjusts the position by shifting up all the higher numbered candidates. 
This leads to a change in the joining day of some of the candidates.
Help Chef determine the number of candidates who will join on a different day than expected.

Input Format :
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, 
two space-separated integers NN and KK denoting the number of candidates and the candidate who turned down the offer.

Output Format :
For each test case, output a single integer denoting the number of candidates whose joining day will be changed.

Constraints :
1 \leq T \leq 10001≤T≤1000
2 \leq N \leq 10002≤N≤1000
1 \leq K \leq N1≤K≤N

Sample 1:
Input :
4
7 3
6 6
2 1
14 2
Output :
1
0
0
2

Explanation:
Test case 11: The original joining day of each candidate is given as [1, 1, 1, 1, 1, 2, 2][1,1,1,1,1,2,2] but as candidate 33 turns down his offer, 
the new joining days are now [1, 1, NA, 1, 1, 1, 2][1,1,NA,1,1,1,2]. Candidate numbered 66 is the only one to have his joining day changed.

Test case 22: The original joining day of each candidate is given as [1, 1, 1, 1, 1, 2][1,1,1,1,1,2] but as candidate 66 turns down his offer, 
the new joining days are now [1, 1, 1, 1, 1, NA][1,1,1,1,1,NA]. No candidate got his joining day changed.

Test case 33: The original joining day of each candidate is given as [1, 1][1,1] but as candidate 11 turns down his offer, 
the new joining days are now [NA, 1][NA,1]. No candidate got his joining day changed.

Test case 44: The original joining day of each candidate is given as [1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3][1,1,1,1,1,2,2,2,2,2,3,3,3,3]
but as candidate 22 turns down his offer, the new joining days are now [1, NA, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3][1,NA,1,1,1,1,2,2,2,2,2,3,3,3]. Candidate numbered 66 and 1111 are the only ones to have their joining days changed.
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
        ll N_Candidates = 0, K_Candidate = 0;
        cin >> N_Candidates >> K_Candidate;
        
        cout << (N_Candidates - 1) / 5 - (K_Candidate - 1) / 5 << endl;
    }
	return 0;
}
