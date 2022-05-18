/*
CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new features:
Recent Contest Problems - Contains only problems from the last 2 contests
Separate Un-Attempted, Attempted, and All tabs
Problem Difficulty Rating - 
The Recommended dropdown menu has various difficulty ranges so that you can attempt the problems most suited to your experience
Popular Topics and Tags
Chef has been participating regularly in rated contests but missed the last two contests due to his college exams. 
He now wants to solve them and so he visits the practice page to view these problems.
Given a list of N contest codes, where each contest code is either START38 or LTIME108, 
help Chef count how many problems were featured in each of the contests.

Input Format :
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line of input contains the total count of problems that appeared in the two recent contests - N.
Second line of input contains the list of N contest codes. Each code is either START38 or LTIME108, to which each problem belongs.

Output Format :
For each test case, output two integers in a single new line - the first integer should be the number of problems in START38, 
and the second integer should be the number of problems in LTIME108.

Constraints :
1≤T≤10
1≤N≤1000
Each of the contest codes will be either START38 or LTIME108.

Sample Input 1 :
4
3
START38 LTIME108 START38
4
LTIME108 LTIME108 LTIME108 START38
2
LTIME108 LTIME108
6
START38 LTIME108 LTIME108 LTIME108 START38 LTIME108

Sample Output 1 :
2 1
1 3
0 2
2 4

Explanation :
Test case 1: There are 2 START38s in the input, which means that there were 2 problems in START38. Similarly, there was 1 problem in LTIME108.

Test case 2: There is 1 START38 in the input, which means that there was 1 problem in START38. Similarly, there were 3 problems in LTIME108.

Test case 3: There are no START38s in the input, which means that were 0 problems in START38. Similarly, there were 2 problems in LTIME108.

Test case 4: There are 2 START38s in the input, which means that there were 2 problems in START38. Similarly, there were 4 problems in LTIME108.
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
        ll N_count = 0, cnt1 = 0, cnt2 = 0;;
        cin >> N_count;
        
        for(ll i = 0; i < N_count; i++)
        {
            string s;
            cin >> s;
            
            if(s == "START38")
                cnt1++;
            else
                cnt2++;
        }
        cout << cnt1 << " " << cnt2 << endl;
    }
	return 0;
}
