/*
https://www.codechef.com/START99C/problems/CARDSWIPE
*/
#include <iostream>
#include<unordered_map>
#include <algorithm>
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
        
        ll arr[N_elements];
        unordered_map<ll, int> uobj;
        int ans = 0, cnt = 0;

        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            if(!uobj[arr[i]])
            {
                //uobj.erase(arr[i]);
                cnt++;
                ans = max(ans,cnt);
                uobj[arr[i]]++;
            }
            else
            {
                cnt--;
                uobj[arr[i]]--;
            }
        }
        
        cout << ans << endl;
    }
	return 0;
}
