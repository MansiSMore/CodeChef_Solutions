/*
Recently, Chef's College Examination has concluded. He was enrolled in 3 courses and he scored A,B,C in them, respectively. 
To pass the semester, he must score at least Amin,Bmin,Cmin marks in the respective subjects along with a cumulative score of at least Tmin, i.e, A+B+C≥Tmin.
Given seven integers Amin,Bmin,Cmin,Tmin,A,B,C, tell whether Chef passes the semester or not.

Input:
The first line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, seven integers Amin,Bmin,Cmin,Tmin,A,B,C each separated by aspace.

Output:
Output in a single line, the answer, which should be "YES" if Chef passes the semester and "NO" if not.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints:
1≤T≤100
1≤Amin,Bmin,Cmin,A,B,C≤100
Amin+Bmin+Cmin≤Tmin≤300

Sample Input 1 :
5
1 1 1 300 2 2 2
3 2 2 6 2 2 2
2 3 2 6 2 2 2
2 2 3 6 2 2 2
100 100 100 300 100 100 100

Sample Output 1 :
NO
NO
NO
NO
YES

Explanation :
TestCase 1: Chef is passing in all the subjects individually but his total score (2+2+2=6) is much below the required threshold of 300 marks. 
So Chef doesn't pass the semester.

TestCase 2: Chef's score in the first subject is less than the threshold, so he doesn't pass the semester.

TestCase 3: Chef's score in the second subject is less than the threshold, so he doesn't pass the semester.

TestCase 4: Chef's score in the third subject is less than the threshold, so he doesn't pass the semester.

TestCase 5: Chef is passing in all the subjects individually and also his total score is equal to the required threshold of 300 marks. 
So Chef passes the semester.
*/
#include <iostream>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	while(T--)
	{
	    int Amin = 0, Bmin = 0, Cmin = 0, Tmin = 0, A = 0, B = 0, C = 0;
	    cin >> Amin >> Bmin >> Cmin >> Tmin >> A >> B >> C;
	    if(A >= Amin && B >= Bmin && C >= Cmin)
	    {
	        if((A + B + C) >= Tmin)
	        {
	            cout << "Yes\n";
	        }
	        else
	        {
	            cout << "No\n";
	        }
	    }
	    else
	    {
	        cout << "No\n";
	    }
	}
	return 0;
}
