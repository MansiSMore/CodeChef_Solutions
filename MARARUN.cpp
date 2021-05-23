/*
Chefland is holding a virtual marathon for the categories 10 km, 21 km and 42 km having prizes A,B,C (A<B<C) respectively to promote physical fitness. 
In order to claim the prize in a particular category the person must cover the total distance for that category within D days.
Also a single person cannot apply in multiple categories.
Given the maximum distance d km that Chef can cover in a single day, find the maximum prize that Chef can win at the end of D days. 
If Chef can't win any prize, print 0.

Input :
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, five integers D,d,A,B,C.

Output :
For each test case, output in a single line the answer to the problem.

Constraints :
1≤T≤50
1≤D≤10
1≤d≤5
1≤A<B<C≤105

Sample Input :
3
1 1 1 2 3
10 1 1 2 3
10 3 1 2 3

Sample Output :
0
1
2

Explanation :
Test Case 1: The maximum distance covered by Chef is 1⋅1=1 km which is less than any of the available distance categories.
Hence Chef won't be able to claim a prize in any of the categories.

Test Case 2: The maximum distance covered by Chef is 10⋅1=10 km which is equal to distance of the first category. 
Hence Chef can claim the maximum prize of 1 units.

Test Case 3: The maximum distance covered by Chef is 10⋅3=30 km which is more than the distance of the second category but less than that of the third category. 
Hence Chef can claim the maximum prize of 2 units.
*/
#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int D = 0, d = 0;
        cin >> D >> d;
        
        long long A = 0, B = 0, C = 0;
        cin >> A >> B >> C;
        int mult = D * d;
        
        if(mult < 21 && mult >= 10)
        {
            cout << A << endl;

        }
        else if(mult >= 21 && mult < 42)
        {
            cout << B << endl;
        }
        else if(mult >= 42)
        {
            cout << C << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
	return 0;
}
