/*
https://www.codechef.com/START84D/problems/DNATION
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_rupees = 0, Y_rupees = 0;
        cin >> X_rupees >> Y_rupees;
        cout << Y_rupees - X_rupees << endl;
    }
	return 0;
}
