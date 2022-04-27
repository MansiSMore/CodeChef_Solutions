/*
In Chefland, each chicken has X legs and each duck has Y legs. Chef's farm can have exactly one type of bird.
Given that the birds on the farm have a total of Z legs:
Print CHICKEN, if the farm can have only chickens but not ducks.
Print DUCK, if the farm can have only ducks but not chickens.
Print ANY, if the farm can have either chickens or ducks.
Print NONE, if the farm can have neither chickens nor ducks.

Input Format :
The first line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers X,Y,Z.

Output Format :
For each test case, output in a single line the type of bird on the farm.
Print CHICKEN, if the farm can have only chickens but not ducks.
Print DUCK, if the farm can have only ducks but not chickens.
Print ANY, if the farm can have either chickens or ducks.
Print NONE, if the farm can have neither chickens nor ducks.
You may print each character of the string in uppercase or lowercase (for example, the strings 𝙰𝚗𝚈, 𝚊𝚗𝚈, 𝚊𝚗𝚢 and 𝙰𝙽𝚈 will all be treated as identical).

Constraints :
1≤T≤1000
1≤X,Y,Z≤1000

Sample Input 1 :
3
2 3 5
2 2 2
3 4 6

Sample Output 1 :
NONE
ANY
CHICKEN

Explanation :
Test case 1: There are 5 legs on the farm. Each chicken has 2 legs and each duck has 3 legs. Thus, the farm can have neither chickens nor ducks.
Test case 2: There are 2 legs on the farm. Each chicken has 2 legs and each duck has 2 legs. Thus, the farm can have any bird among chicken and duck.
Test case 3: There are 6 legs on the farm. Each chicken has 3 legs and each duck has 4 legs. Thus, the farm can have chicken only.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_chicken_legs = 0, Y_duck_legs = 0, Z_total_legs = 0;
        cin >> X_chicken_legs >> Y_duck_legs >> Z_total_legs;
        
        if(Z_total_legs % X_chicken_legs == 0 && Z_total_legs % Y_duck_legs != 0)
        {
            cout << "CHICKEN\n";
        }
        else if(Z_total_legs % Y_duck_legs == 0 && Z_total_legs % X_chicken_legs != 0)
        {
            cout << "DUCK\n";
        }
        else if(Z_total_legs % X_chicken_legs == 0 && Z_total_legs % Y_duck_legs == 0)
        {
            cout << "ANY\n";
        }
        else
        {
            cout << "NONE\n";
        }
    }
        
	return 0;
}
