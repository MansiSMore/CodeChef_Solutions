/*
https://www.codechef.com/problems/FINDK3
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
        ll X_int = 0, Y_int = 0, Z_int = 0;
        cin >> X_int >> Y_int >> Z_int;
        if((X_int * Y_int) % Z_int == 0) 
        {
            cout << (X_int * Y_int) << " " << Z_int << endl;
        }
        else if((X_int * Z_int) % Y_int == 0) 
        {
            cout << (X_int * Z_int) << " " << Y_int << endl;
        }
        else if((Y_int * Z_int) % X_int == 0) 
        {
            cout << (Y_int * Z_int) << " " << X_int << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
	return 0;
}
