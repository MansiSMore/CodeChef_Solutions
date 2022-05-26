/*
On the CodeChef Practice page, problems with difficulty ≤1600 now have Doubt Support — 
you can go to the problem page and get your queries answered by an experienced CodeChef Doubt Solver through the "Doubt Support" tab.
Given the difficulty of a problem, output whether this problem has Doubt Support or not.

Input Format :
The input consists of a single integer, D, which is the difficulty of the problem.

Output Format :
Output Yes if the problem has Doubt Support, or No if it doesn't.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings yes, YeS, and YES will all be treated as equivalent.

Constraints :
1≤D≤5000

Sample Input 1 :
800
Sample Output 1 :
Yes
Explanation :
800≤1600. Hence, this problem has Doubt Support.

Sample Input 2 :
1600
Sample Output 2 :
Yes
Explanation :
1600≤1600. Hence, this problem has Doubt Support.

Sample Input 3 :
1601
Sample Output 3 :
No
Explanation :
1601≰1600. Hence, this problem does not have Doubt Support.

Sample Input 4 :
5000
Sample Output 4 :
No
Explanation :
5000≰1600. Hence, this problem does not have Doubt Support.
*/
#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll D_doubt = 0;
    cin >> D_doubt;
    
    if(D_doubt <= 1600)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
	return 0;
}
