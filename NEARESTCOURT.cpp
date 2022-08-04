/*
Chef and Chefina are at positions X and Y on a number line.
They both love badminton. 
It is known that badminton courts are located at every integer point.
They want to find a court such that the maximum distance travelled by either of them is minimized.
Formally, suppose they choose the badminton court at position Z. You need to find the minimum value of max(|X−Z|,|Y−Z|) across all possible choices of Z. 
Here, |X| denotes absolute value of X.
Report this minimum value.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y.

Output Format :
For each test case, output the minimum possible value of max(|X−Z|,|Y−Z|).

Constraints :
1≤T≤1000
1≤X,Y≤1000
X≠Y

Sample Input 1 :
4
3 5
7 6
1 10
63 31

Sample Output 1 :
1
1
5
16 

Explanation :
Test case 1: They will choose the court at position 4 in the optimal case where both have to travel a distance of 1 unit.

Test case 2: They can either choose the court at position 6 or position 7. In both the cases one person has to travel a distance of 1 unit.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_pos = 0, Y_pos = 0;
        cin >> X_pos >> Y_pos;
        
        int abs_val = abs(X_pos - Y_pos);
        if(abs_val % 2 == 0)
        cout << abs_val / 2 << endl;
        else
        cout << abs_val / 2 + 1 << endl;
    }
	return 0;
}
