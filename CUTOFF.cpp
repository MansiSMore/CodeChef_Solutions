/*
https://www.codechef.com/START78D/problems/CUTOFF
*/
#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long
int main() {
    
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll d1 = 0, d2 = 0;
        
        cin >> d1 >> d2;
        
        ll arr[d1];
        for(int i = 0; i < d1; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr, arr + d1);
        
        int pos = d1 - d2;
        cout << arr[pos] - 1 << endl;

    }
	return 0;
}
