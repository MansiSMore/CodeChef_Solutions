/*
In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:
Top 10 participants receive rupees X each.
Participants with rank 11 to 100 (both inclusive) receive rupees Y each.
Find the total prize money over all the contestants.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y - the prize for top 10 rankers and the prize for ranks 11 to 100 respectively.
Output Format :
For each test case, output the total prize money over all the contestants.

Constraints :
1≤T≤1000
1≤Y≤X≤1000

Sample Input 1 :
4
1000 100
1000 1000
80 1
400 30
Sample Output 1 :
19000
100000
890
6700

Explanation :
Test Case 1: Top 10 participants receive rupees 1000 and next 90 participants receive rupees 100 each. So, total prize money =10⋅1000+90⋅100=19000.
Test Case 2: Top 10 participants receive rupees 1000 and next 90 participants receive rupees 1000 each. So, total prize money =10⋅1000+90⋅1000=100000.
Test Case 3: Top 10 participants receive rupees 80 and next 90 participants receive rupee 1 each. So, total prize money =10⋅80+90⋅1=890.
Test Case 4: Top 10 participants receive rupees 400 and next 90 participants receive rupees 30 each. So, total prize money =10⋅400+90⋅30=6700.
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
        ll X_rupees = 0, Y_rupees = 0;
        cin >> X_rupees >> Y_rupees;
        
        cout << X_rupees * 10 + Y_rupees * 90 << endl;
    }
    
	return 0;
}
