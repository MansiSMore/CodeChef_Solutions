/*
There is a circular track of length M consisting of M checkpoints and M bidirectional roads such that each road has a length of 1 unit.
Chef is currently at checkpoint A and wants to reach checkpoint B. Find the minimum length of the road he needs to travel.

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers A,B, and M - the initial checkpoint, the final checkpoint, 
and the total number of checkpoints respectively.

Output Format :
For each test case, output the minimum length Chef needs to travel.

Constraints :
1≤T≤1000
2≤M≤109
1≤A,B≤M
A≠B

Sample Input 1 :
4
1 3 100
1 98 100
40 30 50
2 1 2

Sample Output 1 :
2
3
10
1

Explanation :
Test Case 1: Chef can go from 1 to 3 as: 1→2 and then 2→3. Thus, total length travelled is 2 units.

Test Case 2: Chef can go from 1 to 98 as: 98←99←100←1. Thus, minimum distance travelled is 3 units.

Test Case 3: Chef can go from 40 to 30 as: 30←31←32←⋯←39←40. Thus, minimum distance travelled is 10 units.

Test Case 4: Chef can go from 2 to 1 as: 1←2. Thus, minimum distance travelled is 1 unit.
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
        ll A_initial = 0, B_destination = 0, M_checkpoints = 0;
        cin >> A_initial >> B_destination >> M_checkpoints;
        
        ll a = abs(B_destination - A_initial), b = abs(M_checkpoints - abs(B_destination - A_initial)); 
        
        if(a < b)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
	return 0;
}
