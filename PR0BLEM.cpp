/*
https://www.codechef.com/problems/PR0BLEM
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
        ll N_alice = 0, M_bob = 0;
        cin >> N_alice >> M_bob;
        ll t1 = N_alice, t2 = M_bob;
        
        if(abs(t1 - t2) % 2 == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
	return 0;
}
