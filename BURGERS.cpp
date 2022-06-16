/*
Chef is fond of burgers and decided to make as many burgers as possible.
Chef has AA patties and BB buns. To make 11 burger, Chef needs 11 patty and 11 bun.
Find the maximum number of burgers that Chef can make.

Input Format :
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers AA and BB, the number of patties and buns respectively.

Output Format :
For each test case, output the maximum number of burgers that Chef can make.

Constraints :
1 \leq T \leq 10001≤T≤1000
1 \leq A, B \leq 10^5 1≤A,B≤10^5
 
Sample 1:
Input:
4
2 2
2 3
3 2
Output:
23 17
2
2
2
17
Explanation:
Test case 11: Chef has 22 patties and 22 buns, and therefore Chef can make 22 burgers.

Test case 22: Chef has 22 patties and 33 buns. Chef can make at most 22 burgers by using 22 patties and 22 buns.

Test case 33: Chef has 33 patties and 22 buns. Chef can make at most 22 burgers by using 22 patties and 22 buns.

Test case 44: Chef has 2323 patties and 1717 buns. Chef can make at most 1717 burgers by using 1717 patties and 1717 buns.
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
        ll A_patties = 0, B_buns = 0;
        cin >> A_patties >> B_buns;
        
        if(A_patties <= B_buns)
        {
            cout << A_patties << endl;
        }
        else
        {
            cout << B_buns << endl;
        }
    }
	return 0;
}
