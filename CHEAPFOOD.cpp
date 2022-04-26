/*
Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. X. 
Chef can use one of the following two coupons to avail a discount.
Get 10 percent off on the bill amount
Get a flat discount of Rs. 100 on the bill amount
What is the maximum discount Chef can avail?

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains a single integer X - the bill amount before discount.

Output Format :
For each testcase, output the maximum discount Chef can avail.

Constraints :
1≤T≤100
100≤X≤10000
X is a multiple of 100.

Sample Input 1 :
3
300
1300
1000

Sample Output 1 :
100
130
100

Explanation :
Test case 1: Using the second coupon, Chef can get a flat discount of Rs. 100, which is maximum.
Test case 2: Using the first coupon, Chef can get a 10 percent discount of Rs. 130, which is maximum.
Test case 3: No matter which coupon Chef chooses Chef will get a discount of Rs. 100.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_bill_amount = 0;
        cin >> X_bill_amount;
        
        if((X_bill_amount * 0.1) < 100)
        {
            cout << 100 << endl;
        }
        else
        {
            cout << X_bill_amount * 0.1 << endl;
        }
    }
	return 0;
}
