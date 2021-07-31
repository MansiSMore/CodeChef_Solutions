/*
Chef has three spells. Their powers are A, B, and C respectively. 
Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P.
Before going to sleep, Chef wants to use exactly two spells out of these three. 
Find the maximum number of hit points Chef can have after using the spells.

Input Format :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers A, B, and C.

Output Format :
For each test case, print a single line containing one integer — the maximum number of hit points.

Constraints :
1≤T≤104
1≤A,B,C≤108

Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1 :
2
4 2 8
10 14 18

Sample Output 1 :
12
32

Explanation
Example case 1: Chef has three possible options:
Use the first and second spell and have 4+2=6 hitpoints.
Use the second and third spell and have 2+8=10 hitpoints.
Use the first and third spell and have 4+8=12 hitpoints.
Chef should choose the third option and use the spells with power 4 and 8 to have 12 hitpoints.

Example case 2: Chef should use the spells with power 14 and 18.
*/
#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        long long A = 0, B = 0, C = 0;
        cin >> A >> B >> C;
        
        long long sum1 = A + B, sum2 = A + C, sum3 = B + C;
        if(sum1 >= sum2 && sum1 >= sum3)
            cout << sum1 << endl;
        else if(sum2 >= sum1 && sum2 >= sum3)
            cout << sum2 << endl;
        else
            cout << sum3 << endl;
    }
	return 0;
}
