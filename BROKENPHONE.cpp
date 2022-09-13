/*
Uttu broke his phone. He can get it repaired by spending X rupees or he can buy a new phone by spending Y rupees. 
Uttu wants to spend as little money as possible. Find out if it is better to get the phone repaired or to buy a new phone.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers X and Y — 
the cost of getting the phone repaired and the cost of buying a new phone.

Output Format :
For each test case,
output REPAIR if it is better to get the phone repaired.
output NEW PHONE if it is better to buy a new phone.
output ANY if both the options have the same price.
You may print each character of REPAIR, NEW PHONE and ANY in uppercase or lowercase (for example, any, ANy, Any will be considered identical).
 
Constraints :
1≤T≤1000
1≤X,Y≤104

Sample Input 1 :
3
100 1000
10000 5000
3000 3000

Sample Output 1 :
REPAIR
NEW PHONE
ANY

Explanation :
Test Case 1: It is better to get the phone repaired since 100<1000.
Test Case 2: It is better to buy a new phone since 10000>5000.
Test Case 3: Uttu can choose either of the two options since 3000=3000.
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
        ll X_old = 0, Y_new = 0;
        cin >> X_old >> Y_new;
        
        if(X_old < Y_new)
        {
            cout << "REPAIR\n";
        }
        else if(X_old == Y_new)
        {
            cout << "ANY\n";
        }
        else
        {
            cout << "NEW PHONE\n";
        }
    }
	return 0;
}
