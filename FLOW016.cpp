/*
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input :
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output :
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

Constraints :
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 1000000

Example :
Input
3 
120 140
10213 312
10 30

Output :
20 840
1 3186456
10 30

*/
#include <iostream>
using namespace std;

long long gcd(long long x, long long y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        long long x = 0, y = 0;
        cin >> x >> y;
        long long temp = gcd(x, y);
        cout << temp << " "<< (x * y)/ temp << endl;
    }
	return 0;
}
