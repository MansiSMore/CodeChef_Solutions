/*
Chef is watching TV. The current volume of the TV is X. 
Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1. 
Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do so.

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X and Y - the initial volume and final volume of the TV.

Output Format :
For each test case, output the minimum number of times Chef has to press a button to change the volume from X to Y.

Constraints :
1≤T≤100
1≤X,Y≤100

Sample Input 1 :
2
50 54
12 10

Sample Output 1 :
4
2

Explanation :
Test Case 1: Chef can press the volume up button 4 times to increase the volume from 50 to 54.
Test Case 2: Chef can press the volume down button 2 times to decrease the volume from 12 to 10.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int curr_vol_x = 0, exp_vol_y = 0;
        cin >> curr_vol_x >> exp_vol_y;
        
        int button_pressed_result = abs(curr_vol_x - exp_vol_y);
        cout << button_pressed_result << endl;
    }
	return 0;
}
