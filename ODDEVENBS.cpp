/*
https://www.codechef.com/START74D/problems/ODDEVENBS
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
        ll N_elements = 0;
        cin >> N_elements;
        
        ll A_binary[N_elements] = {0}, cnt = 0;
        for(int i = 0; i < N_elements; i++)
        {
            cin >> A_binary[i];
            if(A_binary[i] == 0)
                cnt++;
        }
        if(cnt % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "No\n";
        }
    }
	return 0;
}
