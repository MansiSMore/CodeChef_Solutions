/*
There are N sweets in the store. The cost of the ith sweet is Ai rupees. 
Chef is a regular customer, so after buying the ith sweet, he gets a cashback of Bi rupees.
Chef has R rupees. He is fond of all the sweets, so he wants you to calculate the maximum number of sweets he can buy. 
Note that he can buy the same type of sweet multiple times, as long as he has the money to do so.

Input Format :
The first line of input will contain T, the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains two space-separated integers N and R — the number of sweets in the shop and the amount of money Chef has.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
The third line of each test case contains N space-separated integers B1,B2,…,BN.

Output Format :
For each query, print on a new line the maximum number of sweets Chef can buy.

Constraints :
1≤T≤2⋅105
1≤N≤2⋅105
1≤Bi<Ai≤109
1≤R≤109
It is guaranteed that the sum of N over all test cases does not exceed 2⋅105

Sample Input 1 :
3
3 3
2 3 4
1 1 1
2 4
5 4
1 2
4 10
4 4 5 5
1 2 4 2

Sample Output 1 :
2
1
7

Explanation :
Test case 1: Chef buys the first sweet, which costs 2 rupees and has a cashback of 1 rupee. He now has 3−2+1=2 rupees remaining. 
He once again buys the first sweet, which leaves him with 1 rupee, at which point no more sweets can be bought.

Test case 2: Chef buys the second sweet once.
*/
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
typedef long long ll;

bool sortcol(const vector<long>& v1, const vector<long>& v2)
{
    if ((v1[0] - v1[1]) == (v2[0] - v2[1])){
        return v1[0] < v2[0];
    }
    return (v1[0] - v1[1]) < (v2[0] - v2[1]);
}

int main() 
{
    
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_sweets = 0, R_amount = 0;
        cin >> N_sweets >> R_amount;
        
        ll A_rupees[N_sweets] = {0}, B_cashbacks[N_sweets] = {0};
        
        for(ll i = 0; i < N_sweets; i++)
        {
            cin >> A_rupees[i];
        }
        
        for(ll i = 0; i < N_sweets; i++)
        {
            cin >> B_cashbacks[i];
        }
        
        vector<vector<long>> vect;
        for(int i = 0; i < N_sweets; i++)
        {
            vector<long> v;
            v.push_back(A_rupees[i]);
            v.push_back(B_cashbacks[i]);
            
            vect.push_back(v);
        }
        
     sort(vect.begin(), vect.end(), sortcol);
     
     ll cnt = 0;
     for (ll i = 0; i < N_sweets; ) 
     {
        if(R_amount == 0)
        {
             break;
        }
        if(R_amount >= vect[i][0]) 
        {
            int temp = (R_amount - vect[i][0]) / (vect[i][0] - vect[i][1]);
            temp++;
            R_amount -= temp * (vect[i][0] - vect[i][1]);
            cnt += temp;
        }
        else
        {
            i++;
        }
     }
     cout << cnt << endl;
        
        
    }
 return 0;
}
