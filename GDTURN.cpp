/*
https://www.codechef.com/START78D/problems/GDTURN
*/
#include <iostream>
using namespace std;
#define ll long long
int main() {
    
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll d1 = 0, d2 = 0;
        
        cin >> d1 >> d2;
        
        if(d1 + d2 > 6)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
	return 0;
}
