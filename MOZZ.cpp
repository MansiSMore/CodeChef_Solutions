/*
https://www.codechef.com/START99C/problems/MOZZ
*/
#include <iostream>
using namespace std;

#define ll long long
int main() {
	ll T_testcases = 0;
	cin >> T_testcases;
	
	while(T_testcases--)
	{
	    ll X_sticks = 0, Y_plate = 0, R_rs = 0;
	    cin >> X_sticks >> Y_plate >> R_rs;
	    
	    int cnt = R_rs / 30;
	    int temp = (X_sticks + cnt) / Y_plate;
	    if((X_sticks + cnt) % Y_plate == 0)
	    {
	        cout << temp << endl;
	    }
	    else
	    {
	        cout << temp + 1 << endl;
	    }
	}
	return 0;
}
