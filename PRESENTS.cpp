/*
Chef has fallen in love with Cheffina, and wants to buy N gifts for her. On reaching the gift shop, Chef got to know the following two things:
The cost of each gift is 1 coin.
On the purchase of every 4th gift, Chef gets the 5th gift free of cost.
What is the minimum number of coins that Chef will require in order to come out of the shop carrying N gifts?

Input Format :
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer N, the number of gifts in the shop.

Output Format :
For each test case, output on a new line the minimum number of coins that Chef will require to obtain all N gifts.

Constraints :
1≤T≤1000
1≤N≤109

Sample Input 1 :
2
5
4

Sample Output 1 :
4
4

Explanation :
Test case 1: After purchasing 4 gifts, Chef will get the 5th gift free of cost. Hence Chef only requires 4 coins in order to get 5 gifts.
Test case 2: Chef will require 4 coins in order to get 4 gifts.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        long N_gifts = 0;
        cin >> N_gifts;
        
        cout << N_gifts - (N_gifts / 5) << endl;
    }
	return 0;
}
