/*
A problem setter is called an expert if at least 50% of their problems are approved by Chef.
Munchy submitted X problems for approval. If Y problems out of those were approved, find whether Munchy is an expert or not.

Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a two space-separated integers X and Y - the number of problems submitted and the number of problems that were approved by Chef.

Output Format:
For each test case, output on a new line YES, if Munchy is an expert. Otherwise, print NO.
The output is case-insensitive. Thus, the strings YES, yes, yeS, and Yes are all considered the same.

Constraints:
1≤T≤1000
1≤Y≤X≤106

Sample Input 1:
4
5 3
1 1
4 1
2 1

Sample Output 1:
YES
YES
NO
YES

Explanation:
Test case 1: We are given that 3 out of 5 problems were approved. Thus, 60% of the problems were approved. Since at least 50% of the problems were approved, 
Munchy is an expert.

Test case 2: We are given that 1 out of 1 problems were approved. Thus, 100% of the problems were approved. Since at least 50% of the problems were approved,
Munchy is an expert.

Test case 3: We are given that 1 out of 4 problems were approved. Thus, 25% of the problems were approved. Since at least 50% of the problems were not approved,
Munchy is not an expert.

Test case 4: We are given that 1 out of 2 problems were approved. Thus, 50% of the problems were approved. Since at least 50% of the problems were approved, 
Munchy is an expert.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_probs = 0, Y_probs = 0;
        cin >> X_probs >> Y_probs;
        
        if((X_probs * 0.5) <= Y_probs )
            cout << "YES\n";
        else
            cout << "NO\n";
            
    }
	return 0;
}
