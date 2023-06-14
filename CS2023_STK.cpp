/*
https://www.codechef.com/START94D/problems/CS2023_STK
Problem Code:
CS2023_STK
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
        ll N_days = 0;
        cin >> N_days;
        
        ll arr[N_days] = {0}, brr[N_days] = {0};
        
        int cnt1 = 0, cnt2 = 0, mx1 = 0, mx2 = 0;
        
        for(int i = 0; i < N_days; i++)
        {
            cin >> arr[i];
        }
        
        for(int i = 0; i < N_days; i++)
        {
            cin >> brr[i];
        }
        for(int i = 0; i < N_days; i++)
        {
            cnt1 = 0;
            while(i < N_days && arr[i] != 0)
            {
                cnt1++;
                i++;
            }
            
            mx1 = max(mx1, cnt1);
        }
        for(int i = 0; i < N_days; i++)
        {
            cnt2 = 0;
            while(i < N_days && brr[i] != 0)
            {
                cnt2++;
                i++;
            }
            
            mx2 = max(mx2, cnt2);
        }
        
        if(mx1 == mx2)
        {
            cout << "Draw\n";
        }
        else if(mx1 > mx2)
        {
            cout << "Om\n";
        }
        else
        {
            cout << "Addy\n";
        }
    }
	return 0;
}
