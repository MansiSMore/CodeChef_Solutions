/*
Chef wants to give a burger party to all his N friends i.e. he wants to buy one burger for each of his friends.
The cost of each burger is X rupees while Chef has a total of K rupees.
Determine whether he has enough money to buy a burger for each of his friends or not.

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains the three integers N, X, and K - the number of Chef's friends, the cost of each burger, 
and the total money Chef has, respectively.

Output Format :
For each test case, output YES if the Chef can give a party to all his N friends. Otherwise, output NO.
You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints :
1≤T≤1000
1≤N,X≤100
1≤K≤10000

Sample Input 1 :
4
5 10 70
5 10 40
10 40 400
14 14 150

Sample Output 1 : 
YES
NO
YES
NO

Explanation :
Test case 1: Chef has 5 friends. The cost of buying a burger for each of them will be 10×5=50 while Chef has 70 rupees. 
Therefore, he can buy a burger for all of them.

Test case 2: Chef has 5 friends. The cost of buying a burger for each of them will be 10×5=50 while Chef has 40 rupees. 
Therefore, he can not buy a burger for all of them.

Test case 3: Chef has 10 friends. The cost of buying a burger for each of them will be 40×10=400 and Chef has 400 rupees. 
Therefore, he can buy a burger for all of them.

Test case 4: Chef has 14 friends. The cost of buying a burger for each of them will be 14×14=196 while Chef has 150 rupees. 
Therefore, he can not buy a burger for all of them.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_friends = 0, X_burger = 0, K_rupees = 0;
        cin >> N_friends >> X_burger >> K_rupees;
        
        if(N_friends * X_burger <= K_rupees)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
	return 0;
}
