/*
On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom.
Given the number of problems in each of these 3 categories as X,Y, and Z respectively (where all three integers are distinct), 
find if the user has been most active as a Setter, Tester, or Editorialist.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three space-separated integers X,Y, and Z - the number of problems they have set, tested, and written editorials for.

Output Format :
For each test case, output in a new line:
Setter, if the user has been most active as a setter.
Tester, if the user has been most active as a tester.
Editorialist, if the user has been most active as an editorialist.
Note that the output is case-insensitive. Thus, the strings SETTER, setter, seTTer, and Setter are all considered the same.

Constraints :
1≤T≤104
1≤X,Y,Z≤100, where X,Y, and Z are distinct.

Sample Input 1 :
4
5 3 2
1 2 4
2 5 1
9 4 5

Sample Output 1 :
Setter
Editorialist
Tester
Setter

Explanation :
Test case 1: The number of problems that the user has set is greater than the number of problems tested or written editorials for. 
Thus, the user is most active as setter.

Test case 2: The number of problems that the user has written editorials for, is greater than the number of problems set or tested. 
Thus, the user is most active as editorialist.

Test case 3: The number of problems that the user has tested is greater than the number of problems set or written editorials for. 
Thus, the user is most active as tester.

Test case 4: The number of problems that the user has set is greater than the number of problems tested or written editorials for. 
Thus, the user is most active as setter.
*/
#include <iostream>
using namespace std;


int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_setter = 0, Y_tester = 0, Z_edits = 0;
        cin >> X_setter >> Y_tester >> Z_edits;
        
        if(X_setter > Y_tester && X_setter > Z_edits)
        {
            cout << "Setter\n";
        }
        else if(Y_tester > X_setter && Y_tester > Z_edits)
        {
            cout << "Tester\n";
        }
        else
        {
            cout << "Editorialist\n";
        }
    }
	return 0;
}
