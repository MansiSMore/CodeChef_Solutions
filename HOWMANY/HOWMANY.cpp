/*
Write a program to obtain a number (N) from the user and display whether the number is a one digit number, 2 digit number, 
3 digit number or more than 3 digit number

Input :
First line will contain the number N,

Output :
Print "1" if N is a 1 digit number.
Print "2" if N is a 2 digit number.
Print "3" if N is a 3 digit number.
Print "More than 3 digits" if N has more than 3 digits.

Constraints :
0≤N≤1000000

Sample Input:
9

Sample Output:
1

*/
#include <iostream>
using namespace std;

int countDigits(int no)
{
    int cnt = 0;
    
    while(no != 0)
    {
        cnt++;
        no /= 10;
    }
    return cnt;
}

int main() 
{
    int N = 0;
    cin >> N;
    
    if(countDigits(N) == 1)
        cout << "1\n";
    else if(countDigits(N) == 2)
        cout << "2\n";
    else if(countDigits(N) == 3)
        cout << "3\n";
    else
        cout << "More than 3 digits\n";

	return 0;
}
