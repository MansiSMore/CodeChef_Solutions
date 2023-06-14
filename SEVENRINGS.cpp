/*
https://www.codechef.com/problems/SEVENRINGS
*/

#include <iostream>
#include <cmath>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_items = 0, X_price = 0;
        cin >> N_items >> X_price;
        
        ll ans = N_items * X_price;
        int cnt = log10(ans) + 1;
        int temp = (int)(ans / pow(10, 4));
        
        if(cnt == 5 && (temp != 0))
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
