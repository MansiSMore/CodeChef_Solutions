/*
https://www.codechef.com/START74D/problems/MANAPTS
*/
#include <iostream>
using namespace std;

#define ll long long
int main() {
	// your code goes here
	
	ll T_testcases = 0;
	cin >> T_testcases;
	
	while(T_testcases--)
	{
	    ll X_mana_points = 0, Y_given_mana = 0;
	    cin >> X_mana_points >> Y_given_mana;
	    
	    cout << Y_given_mana / X_mana_points << endl;
	}
	return 0;
}
