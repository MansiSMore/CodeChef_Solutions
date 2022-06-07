/*
Tuzik is clearly not a fool, he understands that his profit depends on the number of people he will call. 
While Tuzik works on his barking, you have to find the maximum possible number of coins he can get.

Input :
The first line of the input contains an integer T denoting the number of test cases. 
Each of next T lines contains 2 space-separated integers: N and K, for this test case.

Output :
For each test case output one integer - the maximum possible number of coins Tuzik can get.

Constraints :
1 ≤ T ≤ 50
1 ≤ N, K ≤ 105

Sample 1 :
Input :
2
5 2

Output :
11 3
1
2

Explanation :
In the first example he should call two people. Each of them will take 2 coins and they will leave 1 coin for Tuzik.
In the second example he should call 3 people.
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
        ll N_int = 0, K_int = 0;
        cin >> N_int >> K_int;
        
        ll min_coins = N_int % K_int;
        
        for(ll i = 1; i <= K_int; i++)
        {
	       ll ans = N_int % i;
	       
	       if(ans > min_coins)
	       {
	           min_coins = ans;
	       }
	   }
	   
	   cout << min_coins << endl;;
    }
	return 0;
}
