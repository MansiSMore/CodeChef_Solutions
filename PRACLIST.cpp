/*
CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new features:
Recent Contest Problems - contains only problems from the last 2 contests
Separate Un-Attempted, Attempted, and All tabs
Problem Difficulty Rating - the Recommended dropdown menu has various difficulty ranges so that you can attempt the problems most 
suited to your experience
Popular Topics and Tags
Our Chef is currently practicing on CodeChef and is a beginner. The count of ‘All Problems’ in the Beginner section is X. 
Our Chef has already ‘Attempted’ Y problems among them. How many problems are yet ‘Un-attempted’?

Input Format :
The first and only line of input contains two space-separated integers X and Y — the count of 'All problems' 
in the Beginner's section and the count of Chef's 'Attempted' problems, respectively.

Output Format :
Output a single integer in a single line — the number of problems that are yet 'Un-attempted'

Constraints :
1≤Y≤X≤1000

Subtasks :
Subtask 1 (100 points):
Original constraints.
Sample Input 1 :
10 4
Sample Output 1 :
6

Sample Input 2 :
10 10
Sample Output 2 :
0

Sample Input 3 :
1000 990
Sample Output 3 :
10

Sample Input 4 :
500 1
Sample Output 4 :
499

Explanation :
Test case 1: There are 10 problems in total in the Beginner's section, out of which 4 have been attempted. Hence, there are 6 Un-attempted problems.

Test case 2: There are 10 problems in total in the Beginner's section, out of which all have been attempted. Hence, there are 0 Un-attempted problems.

Test case 3: There are 1000 problems in total in the Beginner's section, out of which 990 have been attempted. Hence, there are 10 Un-attempted problems.

Test case 4: There are 500 problems in total in the Beginner's section, out of which only 1 has been attempted. Hence, there are 499 Un-attempted problems.
*/

#include <iostream>
using namespace std;

#define ll long long

int main() 
{
    ll X_all = 0, Y_attempted = 0;
    cin >> X_all >> Y_attempted;
        
    cout << X_all - Y_attempted << endl;

	return 0;
}
