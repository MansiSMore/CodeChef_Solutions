/*
https://www.codechef.com/START95C/problems/TRANCHAIN
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_nos = 0;
        cin >> N_nos;
        
        unordered_map<string, int> uobj;
        for(int i = 0; i < N_nos; i++)
        {
            string ch;
            cin >> ch;
            uobj[ch]++;
        }
        int cnt = 0;
        if(uobj.find("O") != uobj.end())
            cnt += uobj["O"];
        if(uobj.find("AB") != uobj.end())
            cnt += uobj["AB"];
        
        int c1 = 0, c2 = 0;
        if(uobj.find("A") != uobj.end())
            c1 += uobj["A"];
        if(uobj.find("B") != uobj.end())
            c2 += uobj["B"];
            
        if(c1 > c2)
        {
            cnt += c1;
        }
        else
        {
            cnt += c2;
        }
        cout << cnt << endl;
    }
	return 0;
}
