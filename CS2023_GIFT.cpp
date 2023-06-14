/*
https://www.codechef.com/START94D/problems/CS2023_GIFT 
Problem Code:
CS2023_GIFT
*/
#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll X_rs = 0, N_rs = 0, M_rs = 0;
    cin >> X_rs >> N_rs >> M_rs;
    
    if(X_rs + M_rs >= N_rs)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
	
	return 0;
}
