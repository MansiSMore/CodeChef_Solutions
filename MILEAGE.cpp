/*
Chef wants to rent a car to travel to his restaurant which is N kilometers away. He can either rent a petrol car or a diesel car.
One litre of petrol costs X rupees and one litre of diesel costs Y rupees. 
Chef can travel A kilometers with one litre of petrol and B kilometers with one litre of diesel.
Chef can buy petrol and diesel in any amount, not necessarily integer. 
For example, if X=95, Chef can buy half a litre of petrol by paying 95/2=47.5 rupees.
Which car should the chef rent in order to minimize the cost of his travel?

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains 5 space-separated integers, N,X,Y,A, and B - distance that chef needs to travel, 
the per litre prices of petrol and diesel and the distance chef can travel using one litre of petrol and diesel respectively.

Output Format :
For each test case, output on a new line PETROL if the cost of travel is less using petrol car, 
DIESEL if the cost of travel is less using diesel car or ANY if cost of travel is same in both the cases.
You may print each character of the string in either uppercase or lowercase 
(for example, the strings PETrol, petrol, Petrol, and PETROL will all be treated as identical).

Constraints :
1≤T≤100
1≤N,x,y,a,b≤100

Sample Input 1 :
4
20 10 8 2 4
50 12 12 4 3
40 3 15 8 40
21 9 9 2 9

Sample Output 1 :
DIESEL
PETROL
ANY
DIESEL

Explanation :
Test case 1: The cost of travelling by the petrol car will be 100 rupees while that of using the diesel car will be 40 rupees. 
Hence, diesel car is better.

Test case 2: The cost of travelling by the petrol car will be 150 rupees while that of using the diesel car will be 200 rupees. 
Hence, petrol car is better.

Test case 3: The cost of travel for petrol and diesel car will be 15 rupees.

Test case 4: The cost of travelling by the petrol car will be 94.5 rupees while that of using the diesel car will be 21 rupees. 
Hence, diesel car is better.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        float N_kilometers, X_rupees, Y_rupees, A_kilometers, B_kilometers;
        cin >> N_kilometers >> X_rupees >> Y_rupees >> A_kilometers >> B_kilometers;
        
        if((X_rupees / A_kilometers) < (Y_rupees / B_kilometers))
        {
            cout << "PETROL\n";
        }
        else if((X_rupees / A_kilometers) > (Y_rupees / B_kilometers))
        {
            cout << "DIESEL\n";
        }
        else
        {
            cout << "ANY\n";
        }
    }   
	return 0;
}
