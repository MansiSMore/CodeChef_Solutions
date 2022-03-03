/*
There are N tasks waiting in line to be executed. The execution time for the ith task is Ai seconds.
Chef has two processors to execute these N tasks. Both these processors work simultaneously. Each processor executes the assigned tasks one by one.
Chef assigns a prefix of these tasks to the first processor and the remaining tasks to the second processor.

For example, if there are 3 tasks, Chef can do one of the following:
Assign no task to the first processor. This means, the second processor will execute tasks 1,2 and 3.
Assign task 1 to the first processor. This means, the second processor will execute tasks 2 and 3.
Assign tasks 1 and 2 to the first processor. This means, the second processor will execute task 3.
Assign tasks 1,2 and 3 to the first processor. Thus, second processor would execute no tasks.
Find the minimum time in which all the tasks can be executed.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
The first line of each test case contains a single integer N, the number of tasks waiting to be executed.
The second line of each test case contains N space separated positive integers A1,A2,…,AN denoting the execution time for each task.

Output Format :
For each test case, output in a single line, the minimum time in which all tasks can be executed.

Constraints :
1≤T≤100
1≤N≤105
1≤Ai≤105
The sum of N over all test cases is not more than 2⋅105.

Subtasks :
Subtask #1 (100 points): original constraints
Sample Input 1 :
3
3
4 2 3
6
1 1 1 1 1 1
1
5

Sample Output 1 :
5
3
5

Explanation :
Test Case 1: Chef assigns task 1 to the first processor and tasks 2 and 3 to the second processor. 
The first processor takes 4 seconds to execute task 1. The second processor takes 2+3=5 seconds to execute tasks 2 and 3. 
Thus, atleast 5 seconds are required to execute all tasks.

Test Case 2: Chef assigns tasks 1,2 and 3 to the first processor. Processes 4,5 ad 6 are executed by second processor.

Test Case 3: Chef assigns task 1 to the first processor. No task is executed by second processor.
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
        
        long long arr[N] = {0}, sum = 0;
        long long prefix[N] = {0};

        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            prefix[i] = sum;
        }
        
        long long p1 = 0, p2 = 0, req = 0, ans = sum;
        for(int i = 0; i < N; i++)
        {
            p1 = prefix[i];
            p2 = sum - prefix[i];
            req = max(p1, p2);
            ans = min(req, ans);
        }
        cout << ans << endl;
        
    }
	return 0;
}
