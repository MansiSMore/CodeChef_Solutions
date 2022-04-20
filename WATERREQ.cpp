/*
Finally, after purchasing a water cooler during the April long challenge, 
Chef noticed that his water cooler requires 2 liters of water to cool for one hour.
How much water (in liters) would be required by the cooler to cool for N hours?

Input Format :
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer N, as described in the problem statement.

Output Format :
For each test case, output the number of liters of water required by the water cooler to cool for N hours.

Constraints :
1≤T≤1000
1≤N≤1000

Sample Input 1 :
2
1
2

Sample Output 1 :
2
4

Explanation :
Test case 1: As mentioned in the problem statement, 2 liters of water is required by the water cooler to cool for 1 hour.
Test case 2: 4 liters of water is required by the water cooler to cool for 2 hours.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_liters_water = 0;
        cin >> N_liters_water;
        
        cout << N_liters_water * 2 << endl;
    }
	return 0;
}
