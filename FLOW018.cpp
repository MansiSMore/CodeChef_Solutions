/*
Write a program to find the factorial value of any number entered by the user.

Input :
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

Output :
For each test case, display the factorial of the given number N in a new line.

Constraints :
1 ≤ T ≤ 1000
0 ≤ N ≤ 20
Example
Input :
3 
3 
4
5

Output :
6
24
120

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
        
        long long res = 1;
        
        while(N > 1)
        {
            res = res * N;
            N--;
        }
        
        cout << res << endl;
    }
	return 0;
}
