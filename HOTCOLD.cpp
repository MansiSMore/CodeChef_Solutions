/*
Chef considers the climate HOT if the temperature is above 20, otherwise he considers it COLD. 
You are given the temperature C, find whether the climate is HOT or COLD.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains a single integer, the temperature C. 

Output Format :
For each test case, print on a new line whether the climate is HOT or COLD.

You may print each character of the string in either uppercase or lowercase 
(for example, the strings hOt, hot, Hot, and HOT will all be treated as identical).

Constraints :
1≤T≤50
0≤C≤40

Sample Input 1 :
2
21
16

Sample Output 1 :
HOT
COLD
 
Explanation :
Test case 1: The temperature is 21, which is more than 20. So, Chef considers the climate HOT.
Test case 2: The temperature is 16, which is not more than 20. So, Chef considers the climate COLD.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int C_temp = 0;
        cin >> C_temp;
        
        if(C_temp > 20)
            cout << "HOT\n";
        else
            cout << "COLD\n";
    }
	return 0;
}
