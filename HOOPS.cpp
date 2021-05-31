/*
You and your friend are playing a game with hoops. There are N hoops (where N is odd) in a row. 
You jump into hoop 1, and your friend jumps into hoop N. Then you jump into hoop 2, and after that, your friend jumps into hoop N−1, and so on.
The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, a single integer N.
Output
For each testcase, output in a single line the answer to the problem.

Constraints
1≤T≤105
1≤N<2⋅105
N is odd
Subtasks
Subtask #1 (100 points): original constraints

Sample Input
2
1
3
Sample Output
1
2

Explanation
Test Case 1: Since there is only 1 hoop, that's the only one to be jumped into.
Test Case 2: The first player jumps into hoop 1. The second player jumps into hoop 3 and finally the first player jumps into hoop 2. 
Then the second player cannot make another jump, so the process stops.
*/
#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        long long N = 0;
        cin >> N;
        
        int t = (N / 2) + 1;
        cout << t << endl;
    }
	return 0;
}
