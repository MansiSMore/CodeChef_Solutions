/*
https://www.codechef.com/START78D/problems/CANDYSTORE
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
        
        if(d1 < d2)
            cout << d1 + (d2 - d1) * 2 << endl;
        else
            cout << d2 << endl;
    }
	return 0;
}
