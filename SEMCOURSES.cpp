/*
This semester, Chef took X courses. Each course has Y units and each unit has Z chapters in it.
Find the total number of chapters Chef has to study this semester.

Input Format :
The first line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers X,Y, and Z.

Output Format :
For each test case, output in a single line the total number of chapters Chef has to study this semester.

Constraints :
1≤T≤1000
1≤X,Y,Z≤1000

Sample Input 1 :
3
1 1 1
2 1 2
1 2 3

Sample Output 1 :
1
4
6

Explanation :
Test case 1: There is only 1 course with 1 unit. The unit has 1 chapter. Thus, the total number of chapters is 1.
Test case 2: There are 2 courses with 1 unit each. Thus, there are 2 units. Each unit has 2 chapters. Thus, the total number of chapters is 4.
Test case 3: There is only 1 course with 2 units. Each unit has 3 chapters. Thus, the total number of chapters is 6.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_courses = 0, Y_units = 0, Z_chapters = 0;
        cin >> X_courses >> Y_units >> Z_chapters;
        
        cout << X_courses * Y_units * Z_chapters << endl;
    }
	return 0;
}
