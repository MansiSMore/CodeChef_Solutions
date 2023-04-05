/*
https://www.codechef.com/START84D/problems/MAX_BIN
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
        ll N_length = 0, K_times = 0;
        cin >> N_length >> K_times;
        
        string s;
        cin >> s;
        
        if(s[0] == '1')
        {
            for(int i = 0; i < K_times; i++)
            {
                s += '0';
            }
        }
        else 
        {
            s[0] = '1';
            for(int i = 0; i < K_times - 1; i++)
            {
                s += '0';
            }
        }
        
        cout << s << endl;
    }
	return 0;
}
