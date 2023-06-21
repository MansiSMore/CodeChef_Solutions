/*
https://www.codechef.com/START95C/problems/ALTTAB
*/
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    vector<string> vobj;
    string ans;

    unordered_map<string, int> uobj;
    for(int i = 0; i < T_testcases; i++)
    {
        string st;
        cin >> st;
        
        vobj.push_back(st);
    }
    
    for(int i = T_testcases - 1; i >= 0; i--)
    {
        if(uobj[vobj[i]] == 0)
        {
            int sz = vobj[i].size();
            ans += vobj[i].substr(sz - 2, sz - 1);
        }
        uobj[vobj[i]]++;
    }
    cout << ans << endl;
	return 0;
}
