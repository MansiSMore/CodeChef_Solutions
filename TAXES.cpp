/*
In Chefland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 100.
Given that total income is X rupees, find out how much money you get.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains a single integer X — your total income.

Output Format :
For each test case, output on a new line, the amount of money you get.

Constraints :
1≤T≤100
1≤X≤1000

Sample Input 1 :
4
5
105
101
100

Sample Output 1 :
5
95
91
100

Explanation :
Test case 1: Your total income is 5 rupees which is less than 100 rupees. Thus, no tax would be deducted and you get 5 rupees.

Test case 2: Your total income is 105 rupees which is greater than 100 rupees. Thus, a tax of 10 rupees would be deducted and you get 105−10=95 rupees.

Test case 3: Your total income is 101 rupees which is greater than 100 rupees. Thus, a tax of 10 rupees would be deducted and you get 101−10=91 rupees.

Test case 4: Your total income is 100 rupees which is equal to 100 rupees. Thus, no tax would be deducted and you get 100 rupees.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_income = 0;
        cin >> X_income;
        
        if(X_income > 100)
            cout << X_income - 10 << endl;
        else
            cout << X_income << endl;
            
    }
	// your code goes here
	return 0;
}
