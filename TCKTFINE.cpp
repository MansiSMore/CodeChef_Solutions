/*
On a certain train, Chef-the ticket collector, collects a fine of Rs. X if a passenger is travelling without a ticket. It is known that a passenger carries either a single ticket or no ticket.

P passengers are travelling and they have a total of Q tickets. Help Chef calculate the total fine collected.

Input Format
The first line contains a single integer T, the number of test cases. T lines follow. 
Each following line contains three integers separated by spaces, whose description follows.
The first integer, X, is the fee in rupees.
The second integer, P, is the number of passengers on the train.
The third integer, Q, is the number of tickets Chef collected.
Output Format
The output must consist of T lines.
The ith line must contain a single integer, the total money(in rupees) collected by Chef corresponding to the ith test case.

Constraints :
1≤T≤10
1≤X≤10
0≤Q≤P≤10

Sample Input 1 :
4
4 1 1
2 10 7
8 5 4
9 7 0

Sample Output 1 :
0
6
8
63

Explanation :
Test case 1: The total number of passengers travelling without ticket are 1−1=0. So the total fine collected is 0⋅4=0 rupees.
Test case 2: The total number of passengers travelling without ticket are 10−7=3. So the total fine collected is 3⋅2=6 rupees.
Test case 3: The total number of passengers travelling without ticket are 5−4=1. So the total fine collected is 1⋅8=8 rupees.
Test case 4: The total number of passengers travelling without ticket are 7−0=7. So the total fine collected is 7⋅9=63 rupees.
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
        ll X_fees = 0, P_passengers = 0, Q_tickets = 0;
        cin >> X_fees >> P_passengers >> Q_tickets;
        
        cout << X_fees * (P_passengers - Q_tickets) << endl;
    }
	return 0;
}
