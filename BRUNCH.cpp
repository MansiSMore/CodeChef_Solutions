/*
https://www.codechef.com/START103D/problems/BRUNCH
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
        ll X_plates = 0, Y_plates = 0;
        cin >> X_plates >> Y_plates;
        
        ll temp = X_plates / Y_plates;
        if(temp > 20)
        cout << 20 << endl;
        else
        cout << temp << endl;
    }
	return 0;
}
