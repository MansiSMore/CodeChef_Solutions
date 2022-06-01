/*
n ChefLand, human brain speed is measured in bits per second (bps). 
Chef has a threshold limit of X bits per second above which his calculations are prone to errors. 
If Chef is currently working at Y bits per second, is he prone to errors?
If Chef is prone to errors print YES, otherwise print NO.

Input Format :
The only line of input contains two space separated integers X and Y — the threshold limit and the rate at which Chef is currently working at.

Output Format :
If Chef is prone to errors print YES, otherwise print NO.
You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

Constraints :
1≤X,Y≤100

Sample Input 1 :
7 9
Sample Output 1 :
YES
Explanation :
Chef's current brain speed of 9 bps is greater than the threshold of 7 bps, hence Chef is prone to errors.

Sample Input 2 : 
6 6
Sample Output 2 :
NO
Explanation :
Chef's current brain speed of 6 bps is not greater than the threshold of 6 bps, hence Chef is not prone to errors.
*/

#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll X_threshold = 0, Y_current = 0;
    cin >> X_threshold >> Y_current;
    
    if(X_threshold < Y_current)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
	return 0;
}
