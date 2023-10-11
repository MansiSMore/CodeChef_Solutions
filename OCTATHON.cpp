/*
https://www.codechef.com/START103D/problems/OCTATHON
*/
#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll X_hours = 0;
    cin >> X_hours;
    
    if(X_hours < 3)
    {
        cout << "GOLD\n";
    }
    else if(X_hours >= 3 && X_hours < 6)
    {
        cout << "SILVER\n";
    }
    else
    {
        cout << "BRONZE\n";
    }
	return 0;
}
