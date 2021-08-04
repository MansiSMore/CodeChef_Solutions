/*
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input :
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output :
For each test case, display the sum of first and last digits of N in a new line.

Constraints :
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example
Input :
3  
1234
124894
242323

Output :
5
5
5
*/

#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0;
        cin >> N;
        
        int sum = 0, i = 0;
        sum += N % 10;
        
        while(N != 0)
        {
            i = N % 10;
            N = N / 10;
        }
        sum += i;
        
        cout << sum << endl;
    }
	return 0;
}
