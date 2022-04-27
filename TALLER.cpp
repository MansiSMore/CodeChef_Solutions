/*
Alice and Bob were having an argument about which of them is taller than the other. 
Charlie got irritated by the argument, and decided to settle the matter once and for all.
Charlie measured the heights of Alice and Bob, and got to know that Alice's height is X centimeters and Bob's height is Y centimeters. 
Help Charlie decide who is taller.
It is guaranteed that X≠Y.

Input Format :
The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two integers X and Y, as described in the problem statement.

Output Format :
For each test case, output on a new line 𝙰 if Alice is taller than Bob, else output 𝙱. 
The output is case insensitive, i.e, both 𝙰 and 𝚊 will be accepted as correct answers when Alice is taller.

Constraints :
1≤T≤1000
100≤X,Y≤200
X≠Y

Sample Input 1 :
2
150 160
160 150

Sample Output 1 :
B
A

Explanation :
Test case 1: In this case, 150<160 so Bob is taller than Alice.
Test case 2: In this case, 160>150 so Alice is taller than Bob.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_alice_height = 0, Y_bob_height = 0;
        cin >> X_alice_height >> Y_bob_height;
        
        if(X_alice_height > Y_bob_height)
        {
            cout << "A\n";
        }
        else
        {
            cout << "B\n";
        }
    }
	return 0;
}
