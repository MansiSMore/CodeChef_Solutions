/*
There are N items in a shop. You know that the price of the i-th item is Ai. Chef wants to buy all the N items.
There is also a discount coupon that costs X rupees and reduces the cost of every item by Y rupees. 
If the price of an item was initially ≤Y, it becomes free, i.e, costs 0.
Determine whether Chef should buy the discount coupon or not. 
Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than 
the price he pays without buying the discount coupon.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of two lines of input.
The first line of the test case contains three space-separated integers — N, X, and Y.
The second line contains N space-separated integers — A1,A2,…,AN.

Output Format :
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.
Each letter of the output may be printed in either lowercase or uppercase. 
For example, the strings coupon, CouPoN, and COUPON will all be treated as equivalent.

Constraints :
1≤T≤1000
1≤N≤100
1≤X,Y≤105
1≤Ai≤105

Sample Input 1 :
5
4 30 10
15 8 22 6
4 40 10
15 8 22 6
4 34 10
15 8 22 6
2 10 100
60 80
3 30 5
50 60 50

Sample Output 1 :
COUPON
NO COUPON
NO COUPON
COUPON
NO COUPON

Explanation :
Test case 1: The original cost of the items is 15+8+22+6=51. 
Buying the coupon costs 30, and after buying it the cost of buying all the items is 5+0+12+0=17. 
The total cost of buying everything with the coupon is 30+17=47, which is strictly less than 51. So, Chef will buy the coupon.

Test case 2: The original cost of the items is 15+8+22+6=51. 
Buying the coupon costs 40, and after buying it the cost of buying all the items is 5+0+12+0=17. 
The total cost of buying everything with the coupon is 40+17=57, which is more than 51. So, Chef will not buy the coupon.

Test case 3: The original cost of the items is 51. 
Buying the coupon costs 34, and the cost of buying all the items after using it is 17, making the total cost 34+17=51. 
Since this is not strictly less than the original cost, Chef won't buy the coupon.

Test case 4: The original cost of the items is 140, the coupon costs 10, and the cost of buying everything after using the coupon is 0. 
Since 10+0<140, Chef will buy the coupon.
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
        ll N_items = 0, X_rupees = 0, Y_rupees = 0;
        cin >> N_items >> X_rupees >> Y_rupees;
        
        ll arr[N_items], initial_cost = 0, final_cost = 0;
        for(ll i = 0; i < N_items; i++)
        {
            cin >> arr[i];
            initial_cost += arr[i];
            if(arr[i] <= Y_rupees)
            {
                arr[i] = 0;
            }
            else
            {
                arr[i] -= Y_rupees;
            }
            final_cost += arr[i];
        }
        
        //cout << initial_cost << " " << final_cost << endl;
        if(final_cost + X_rupees < initial_cost)
        {
            cout << "COUPON\n";
        }
        else
        {
            cout << "NO COUPON\n";
        }
        
    }
	return 0;
}
