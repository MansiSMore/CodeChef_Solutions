/*
Tonmoy has a special torch. The torch has 4 levels numbered 1 to 4 and 2 states (𝙾𝚗 and 𝙾𝚏𝚏). 
Levels 1,2, and 3 correspond to the 𝙾𝚗 state while level 4 corresponds to the 𝙾𝚏𝚏 state.

The levels of the torch can be changed as:
Level 1 changes to level 2.
Level 2 changes to level 3.
Level 3 changes to level 4.
Level 4 changes to level 1.
Given the initial state as K and the number of changes made in the levels as N, find the final state of the torch. 
If the final state cannot be determined, print 𝙰𝚖𝚋𝚒𝚐𝚞𝚘𝚞𝚜 instead.

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers N,K - the number of changes made in the levels and initial state of the torch. 
Here, K=0 denotes 𝙾𝚏𝚏 state while K=1 denotes 𝙾𝚗 state.

Output Format :
For each test case, output in a single line, the final state of the torch, i.e. 𝙾𝚗 or 𝙾𝚏𝚏. If the final state cannot be determined, print 𝙰𝚖𝚋𝚒𝚐𝚞𝚘𝚞𝚜 instead.
You may print each character of the string in uppercase or lowercase (for example, the strings 𝙾𝚗, 𝙾𝙽, 𝚘𝚗 and 𝚘𝙽 will all be treated as identical).

Constraints :
1≤T≤105
0≤N≤109
0≤K≤1

Sample Input 1 :
3
4 0
0 1
3 1

Sample Output 1 :
Off
On
Ambiguous

Explanation :
Test Case 1: Initially, the torch is in 𝙾𝚏𝚏 state. 
Since only level 4 corresponds to the 𝙾𝚏𝚏 state, the torch is at level 4 initially. After 4 changes, the final level would be 4. 
Level 4 corresponds to the 𝙾𝚏𝚏 state. Hence, finally the torch is 𝙾𝚏𝚏.

Test Case 2: Initially, the torch is in 𝙾𝚗 state. After 0 changes, the torch remains in the 𝙾𝚗 state.

Test Case 3: Initially, the torch is in 𝙾𝚗 state. This can correspond to any of the first 3 levels. 
Thus, we cannot determine the final level after 3 changes. Hence, the final state is 𝙰𝚖𝚋𝚒𝚐𝚞𝚘𝚞𝚜.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_levels = 0, K_initial_state = 0;
        cin >> N_levels >> K_initial_state;
        
        if(K_initial_state == 1)
        {
            if(N_levels == 0)
            {
                cout << "on\n";
            }
            else if(N_levels % 4 == 0)
            {
                cout << "on\n";
            }
            else
            {
                cout << "Ambiguous\n";
            }
        }
        else
        {
            if(N_levels % 4 == 0)
            {
                cout << "off\n";
            }
            else
            {
                cout << "on\n";
            }
        }
    }
	return 0;
}
