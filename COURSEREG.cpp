/*
There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. 
If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
Each test case consists of a single line containing three integers N, M and K - the size of the friend group, 
the capacity of the course and the number of students already registered for the course.

Output Format :
For each test case, output Yes if it will be possible for all the N friends to register for the course. Otherwise output No.
You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).

Constraints :
1≤T≤1000
1≤N≤M≤100
0≤K≤M

Sample Input 1 :
3
2 50 27
5 40 38
100 100 0

Sample Output 1 :
Yes
No
Yes

Explanation :
Test Case 1: The 2 friends can enroll in the course as it has enough seats to accommodate them and the 27 other students at the same time.
Test Case 2: The course does not have enough seats to accommodate the 5 friends and the 38 other students at the same time.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        int friends_N = 0, capacity_M = 0, students_K = 0;
        cin >> friends_N >> capacity_M >> students_K;
        
        if(capacity_M - students_K >= friends_N)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
