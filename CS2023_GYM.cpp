/*
https://www.codechef.com/START94D/problems/CS2023_GYM
Problem Code:
CS2023_GYM
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
        ll N_members = 0, M_votes = 0;
        cin >> N_members >> M_votes;
        
        cout << M_votes / 2 + 1 << endl;
    }
    
	return 0;
}
