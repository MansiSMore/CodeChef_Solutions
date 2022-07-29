/*
Chef is making a dish that consists of exactly two ingredients. He has four ingredients A,B,C and D with tastiness a,b,c, and d respectively. 
He can use either A or B as the first ingredient and either C or D as the second ingredient.
The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains four space-separated integers a,b,c, and d — the tastiness of the four ingredients.

Output Format :
For each test case, output on a new line the maximum possible tastiness of the dish that chef can prepare.

Constraints :
1≤T≤100
1≤a,b,c,d≤100

Sample Input 1 :
2
3 5 6 2
16 15 5 4

Sample Output 1 :
11
21

Explanation :
Test case 1: Chef can prepare a dish with ingredients B and C with a tastiness of 5+6=11.
Test case 2: Chef can prepare a dish with ingredients A and C with a tastiness of 16+5=21.
*/

#include <iostream>
using namespace std;

int main() 
{
	int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int a = 0, b = 0, c = 0, d = 0;
        cin >> a >> b >> c >> d;
        
        cout << max(a, b) + max(c, d) << endl;
    }
	return 0;
}
