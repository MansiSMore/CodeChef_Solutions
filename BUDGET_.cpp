/*
Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.
Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.

Input Format :
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X, Y - the amount of money Akshat has for the current month and his daily expenditure respectively.

Output Format :
For each test case, output YES if Akshat has enough money to meet his daily expenditure for 30 days of the month, otherwise output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1≤T≤100
1≤X,Y≤105

Sample Input 1 :
3
1000 10
250 50
1500 50

Sample Output 1 :
YES
NO
YES

Explanation :
Test Case 1: Akshat has 1000 rupees and he wants to spend 30×10=300 rupees in the entire month. Therefore, he has enough money for the entire month.
Test Case 2: Akshat has 250 rupees and he wants to spend 30×50=1500 rupees in the entire month. Therefore, he does not have enough money for the entire month.
Test Case 3: Akshat has 1500 rupees and he wants to spend 30×50=1500 rupees in the entire month. Therefore, he has enough money for the entire month.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_no_of_testcases = 0;
    cin >> T_no_of_testcases;
    
    while(T_no_of_testcases--)
    {
        int X_rupees_to_spend = 0, Y_total_expenditure = 0;
        cin >> X_rupees_to_spend >> Y_total_expenditure;
        
        if(X_rupees_to_spend >= Y_total_expenditure * 30)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
	return 0;
}
