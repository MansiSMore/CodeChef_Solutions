/*
https://www.codechef.com/START83D/problems/COUGAME
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    while(T_testcases--)
    {
        int G_int = 0, B_int = 0;
        cin >> G_int >> B_int;
        
        cout << B_int - G_int << endl;
    }
	return 0;
}
