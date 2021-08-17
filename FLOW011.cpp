/*
In a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. 
If the Employee's salary is input, write a program to find his gross salary.

NOTE: Gross Salary = Basic Salary + HRA + DA

Input :
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer salary.

Output :
For each test case, output the gross salary of the employee in a new line. Your answer will be considered correct if the absolute error is less than 10-2.

Constraints :
1 ≤ T ≤ 1000
1 ≤ salary ≤ 100000

Example
Input :
3
1203
10042
1312

Output :
2406.00
20383.16
2624

*/
#include <iostream>
#include <iomanip>  
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int salary = 0;
        float ans = 0.0;
        cin >> salary;
        
        if(salary < 1500)
            ans = 0.1 * salary + 0.9 * salary + salary;
        else
            ans = 0.98 * salary + 500 + salary;
        std::cout << fixed << setprecision(2) << ans << std::endl;

    }
	return 0;
}
