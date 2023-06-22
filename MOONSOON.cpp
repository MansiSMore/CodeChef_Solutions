/*
https://www.codechef.com/problems/MOONSOON
*/
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_cars = 0, M_outlets = 0, H_hours = 0;
        cin >> N_cars >> M_outlets >> H_hours;
        
        ll arr[N_cars] = {0}, brr[M_outlets] = {0};
        
        for(int i = 0; i < N_cars; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N_cars, greater<int>());
        for(int i = 0; i < M_outlets; i++)
        {
            int num = 0;
            cin >> brr[i];
            brr[i] = brr[i] * H_hours;
            //cout << brr[i] << " ";
        }
        sort(brr, brr + M_outlets, greater<int>());
        
        int ans = 0;
        int j = 0;
        for(int i = 0; i < min(N_cars, M_outlets); i++)
        {
           ans += min(arr[i], brr[i]);
        }
        cout << ans << endl;
        
    }
	return 0;
}
