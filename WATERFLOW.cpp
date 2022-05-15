/*
Alice has a bucket of water initially having W litres of water in it. The maximum capacity of the bucket is X liters.
Alice turned on the tap and the water starts flowing into the bucket at a rate of Y litres/hour. She left the tap running for exactly Z hours. 
Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of a single line of input containing four space-separated integers W, X, Y, Z.

Output Format :
For each test case, print the answer on a new line:
If the bucket has overflown print overflow
If it is exactly filled print filled
If it is still unfilled, print unfilled
You may print each character of the string in uppercase or lowercase (for example, the strings filled, FIlled, fiLLed, 
and FILLED will all be treated as identical).

Constraints :
1≤T≤1000
1≤W,X,Y,Z≤1000

Subtasks :
Subtask 1 (100 points):
Original constraints.

Sample Input 1 :
3
1 2 3 4 
10 70 10 6 
2 100 4 3 

Sample Output 1 :
overFlow
filled
Unfilled

Explanation :
Test case 1: Initially the bucket had 1 litre of water, we then added 3 litres of water for 4 hours. 
Thus, the total bucket inflow was 1+3×4=13 litres. Since this is greater than the capacity of 2 litres, the bucket will OVERFLOW

Test case 2: Initially the bucket had 10 litres of water, we then added 10 litres of water for 6 hours. 
Thus, the total bucket inflow was 10+10×6=70 litres. Since this is equal to the capacity of 70 litres, the bucket will be FILLED

Test case 3: Initially the bucket had 2 litres of water, we then added 4 litres of water for 3 hours. 
Thus, the total bucket inflow was 2+4×3=14 litres. Since this is lesser than the capacity of 100 litres, the bucket will be UNFILLED.
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
        ll W_initial = 0, X_capacity = 0, Y_rate = 0, Z_hours = 0;
        cin >> W_initial >> X_capacity >> Y_rate >> Z_hours;
        
        if(W_initial + (Y_rate * Z_hours) == X_capacity)
        {
            cout << "filled\n";
        }
        else if(W_initial + (Y_rate * Z_hours) > X_capacity)
        {
            cout << "overFlow\n";
        }
        else{
            cout << "Unfilled\n";
        }
    }
	return 0;
}
