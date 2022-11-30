/*
King loves to go on tours with his friends.
King has N cars that can seat 5 people each and M cars that can seat 7 people each. 
Determine the maximum number of people that can travel together in these cars.

Input Format :
The first line of input contains a single integer T, the number of test cases.
The first and only line of each test case contains two space-separated integers N and M — the number of 5-seaters and 7-seaters, respectively.

Output Format :
For each test case, output on a new line the maximum number of people that can travel together.

Constraints :
1≤T≤100
0≤N,M≤100

Sample Input 1 :
4
4 8
2 13
14 5
8 8

Sample Output 1 :
76
101
105
96

Explanation :
Test case 1: King has 4 cars that seat 5 each and 8 cars that seat 7 each. So, 4×5+8×7=76 people can travel together.

Test case 2: King has 2 cars that seat 5 each and 13 cars that seat 7 each. So, 2×5+13×7=101 people can travel together.

Test case 3: King has 14 cars that seat 5 each and 5 cars that seat 7 each. So, 14×5+7×7=105 people can travel together.

Test case 4: King has 8 cars that seat 5 each and 8 cars that seat 7 each. So, 8×5+8×7=96 people can travel together.
*/

#include <iostream>
using namespace std;

#define ll long long
int main() {
    
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_cars = 0, M_cars = 0;
        cin >> N_cars >> M_cars;
        
        cout << N_cars * 5 + M_cars * 7 << endl;
    }
	return 0;
}
