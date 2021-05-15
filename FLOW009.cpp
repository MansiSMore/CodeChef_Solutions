/*
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If the quantity and price per item are input, write a program to calculate the total expenses.

Input :
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

Output :
For each test case, output the total expenses while purchasing items, in a new line.

Constraints :
1 ≤ T ≤ 1000
1 ≤ quantity,price ≤ 100000

Example
Input :
3 
100 120
10 20
1200 20

Output :
12000.000000
200.000000
21600.000000
*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        double q = 0.0, p = 0.0;
        cin >> q >> p;
        if(q > 1000)
        {
            printf("%.6lf\n", q * p * 0.9);
        }
        else
        {
            printf("%.6lf\n", q * p);
        }
    }
    return 0;
}
