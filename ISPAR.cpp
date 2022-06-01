/*
N  integers 1,2,3,…N are placed on a circle in clockwise order such that i and (i+1) are adjacent for all 1≤i≤N−1, and 1 and N are also adjacent.
Given an integer K, Ashish repeatedly removes integers from the circle until only one integer remains. He does so in the following manner. 
In each move, Ashish finds the integer which is on the K-th place from the smallest one in clockwise order and removes it from the circle, i.e. 
its neighbours now become adjacent.
For example, consider the case when N=3 and K=3. Let the circular array [1,2,3] denote the integers on the circle. 
In the first move, 3 is removed since it is the K-th integer starting from 1, which is the smallest integer currently on the circle. 
Likewise, in the next move 1 is removed and finally only 2 remains. [1,2,3⎯⎯]→[1⎯⎯,2]→[2].
Since N and K may be very large, Ashish cannot simulate the process himself. 
Help him find the parity of the last integer that remains after the repeated removals. In other words, report if this integer is odd or even.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers N and K.
Output Format :
For each test case, output ODD if the last integer that remains after the repeated removals is odd, and EVEN otherwise.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings odd, Odd, and ODD will all be treated as equivalent.

Constraints :
1≤T≤105
1≤N≤1018
1≤K≤N

Sample Input 1 :
4
4 1
3 3
9 1
3489601027782 8104267

Sample Output 1 :
EVEN
EVEN
ODD
EVEN

Explanation :
Test case 1: The last integer that remains is 4, which is EVEN.
[1⎯⎯,2,3,4]→[2⎯⎯,3,4]→[3⎯⎯,4]→[4]

Test case 2: The last integer that remains is 2, which is EVEN.
[1,2,3⎯⎯]→[1⎯⎯,2]→[2]

Test case 3: The last integer that remains is 9, which is ODD.
[1⎯⎯,2,3,4,5,6,7,8,9]→[2⎯⎯,3,4,5,6,7,8,9]→…→[9]
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
        ll N_int = 0, K_int = 0;
        cin >> N_int >> K_int;
        
        if(K_int == 1)
        {
            if(N_int % 2 == 1)
            {
                cout << "ODD\n";
            }
            else
            {
                cout << "EVEN\n";
            }
        }
        else
        {
            if(K_int == 2)
            {
                cout << "ODD\n";
            }
            else
            {
                cout << "EVEN\n";
            }
        }
    }
	return 0;
}
