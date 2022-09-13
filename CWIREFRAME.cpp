/*
Chef has a rectangular plate of length Ncm and width Mcm. He wants to make a wireframe around the plate. The wireframe costs X rupees per cm.
Determine the cost Chef needs to incur to buy the wireframe.

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers N,M, and X — the length of the plate, width of the plate, 
and the cost of frame per cm.
 
Output Format :
For each test case, output in a single line, the price Chef needs to pay for the wireframe.

Constraints :
1≤T≤1000
1≤N,M,X≤1000

Sample Input 1 :
3
10 10 10
23 3 12
1000 1000 1000

Sample Output 1 :
400
624
4000000

Explanation :
Test case 1: The total length of the frame is 2⋅10+2⋅10=40 cms. Since the cost is 10 per cm, the total cost would be 10⋅40=400.
Test case 2: The total length of the frame is 2⋅23+2⋅3=52 cms. Since the cost is 12 per cm, the total cost would be 52⋅12=624.
Test case 3: The total length of the frame is 2⋅1000+2⋅1000=4000 cms. Since the cost is 1000 per cm, the total cost would be 4000⋅1000=4000000.
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
        ll N_cm = 0, M_cm = 0, X_rs = 0;
        cin >> N_cm >> M_cm >> X_rs;
        
        cout << (2 * N_cm + 2 * M_cm) * X_rs << endl;
    }
	return 0;
}
