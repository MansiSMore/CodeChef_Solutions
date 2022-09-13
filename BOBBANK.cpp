/*
Bob has an account in the Bobby Bank. His current account balance is W rupees.
Each month, the office in which Bob works deposits a fixed amount of X rupees to his account.
Y rupees is deducted from Bob's account each month as bank charges.
Find his final account balance after Z months. Note that the account balance can be negative as well.

Input Format :
The first line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers W,X,Y, and Z — the initial amount, 
the amount deposited per month, the amount deducted per month, and the number of months.

Output Format :
For each test case, output in a single line the final balance in Bob's account after Z months.

Constraints :
1≤T≤1000
1≤W,X,Y,Z≤104

Sample Input 1 :
3
100 11 1 10
999 25 36 9
2500 100 125 101

Sample Output 1 :
200
900
-25

Explanation :
Test case 1: Bob's current account balance is 100. At the end of each month Bob gets Rs 11 and pays Rs 1, thus gaining 10 per month. 
Thus, at the end of 10 months, Bob will have 100+10×10=200.

Test case 2: Bob's current account balance is 999. At the end of each month Bob gets Rs 25 and pays Rs 36, thus losing 11 per month. 
Thus, at the end of 9 months, Bob will have 999−11×9=900.

Test case 3: Bob's current account balance is 2500. At the end of each month Bob gets Rs 100 and pays Rs 125, thus losing 25 per month. 
Thus, at the end of 101 months, Bob will have 2500−25×101=−25.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int W_rs = 0, X_rs = 0, Y_rs = 0, Z_months = 0;
        cin >> W_rs >> X_rs >> Y_rs >> Z_months;
        cout << W_rs + ((X_rs - Y_rs) * Z_months) << endl;
    }
	return 0;
}
