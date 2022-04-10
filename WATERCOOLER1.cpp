/*
The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:
Rent a cooler at the cost of X coins per month.
Purchase a cooler for Y coins.
Given that the summer season will last for M months in Chefland, help Chef in finding whether he should rent the cooler or not.
Chef rents the cooler only if the cost of renting the cooler is strictly less than the cost of purchasing it. Otherwise, he purchases the cooler.
Print 𝚈𝙴𝚂 if Chef should rent the cooler, otherwise print 𝙽𝙾.

Input Format :
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three integers X, Y and M, as described in the problem statement.

Output Format :
For each test case, output 𝚈𝙴𝚂 if Chef should rent the cooler, otherwise output 𝙽𝙾.
You may print each character of the string in uppercase or lowercase (for example, the strings 𝚈𝚎𝚂, 𝚢𝙴𝚜, 𝚢𝚎𝚜 and 𝚈𝙴𝚂 will all be treated as identical).

Constraints :
1≤T≤100
1≤X,M≤104
1≤Y≤108

Sample Input 1 :
3
5 10 1
5 10 2
5 10 3

Sample Output 1 :
YES
NO
NO

Explanation :
Test case 1: Cost of renting the cooler =5 coins. Cost of purchasing the cooler =10 coins. 
So, Chef should rent the cooler as the cost of renting the cooler for 1 month is strictly less than purchasing it.
Test case 2: Cost of renting the cooler =10 coins. Cost of purchasing the cooler =10 coins. 
So, Chef should not rent the cooler as the cost of renting the cooler for 2 months is not strictly less than purchasing it.
Test case 3: Cost of renting the cooler =15 coins. Cost of purchasing the cooler =10 coins. 
So, Chef should not rent the cooler as the cost of renting the cooler for 3 months is not strictly less than purchasing it.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_cost_per_month = 0, Y_coins = 0, M_months = 0;
        cin >> X_cost_per_month >> Y_coins >> M_months;
        
        if(X_cost_per_month * M_months < Y_coins)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        
    }
	return 0;
}
