/*
You have been recently hired as a developer in CodeChef. 
Your first mission is to implement a feature that will determine the number of submissions that were judged late in a contest.
There are N submissions, numbered 1 through N. For each valid i, the i-th submission was submitted at time Si and judged at time Ji (in minutes). 
Submitting and judging both take zero time. Please determine how many submissions received their verdicts after a delay of more than 5 minutes.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of the input contains a single integer N.
N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ji.

Output :
For each test case, print a single line containing one integer — the number of submissions for which the judging was delayed by more than 5 minutes.

Constraints :
1≤T≤100
1≤N≤100
1≤Si≤Ji≤300 for each valid i

Subtasks :
Subtask #1 (100 points): original constraints

Example Input :
1
5
1 3
4 4
4 10
1 11
2 7

Example Output :
2
Explanation
Example case 1: The delays of the respective submissions are 2 minutes, 0 minutes, 6 minutes, 10 minutes and 5 minutes. 
Only submissions 3 and 4 are delayed by more than 5 minutes, hence the answer is 2.

*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        int N = 0;
        cin >> N;
        int cnt = 0;
        for(int i = 0; i < N; i++)
        {
            int A = 0, B = 0;
            cin >> A >> B;
                  
            if(B - A > 5)
                cnt++;
        }
        cout << cnt << endl;
      }
	return 0;
}
