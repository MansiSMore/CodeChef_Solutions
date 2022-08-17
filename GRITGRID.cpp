/*
Alice and Bob are trapped in a grid having N rows and M columns. 
Alice is currently at cell (1,1) and Bob is at cell (N,M) and they both want to meet each other at any common cell. 
But they have some restrictions in the way they can move and meet:
A step is defined as moving to an adjacent cell from the current cell that the person is in. 
So in a single step, if a person is at (X,Y) they may move to any one of the following cells, 
provided that they are inside the grid's boundaries - (X+1,Y), (X,Y+1), (X−1,Y), (X,Y−1).
A move for Alice is defined to be exactly X steps. And a move for Bob is defined to be exactly Y steps.
They can only meet at the common cell after Alice has just completed her move i.e. 
they should not meet in the middle of anyone's move or at the end of Bob's move. 
The first time that they meet should be right after a move of Alice, and they stop moving after that.
Alice makes a move first, then Bob makes a move, and they alternate like this.
Alice and Bob want to know if it is possible to meet with these restrictions. 
Please help Alice and Bob by telling them whether they would be able to meet each other if they stick to these restrictions.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing four integers: N, M, X and Y denoting the number of rows, 
number of columns, number of steps in Alice's one move and the number of steps in Bob's one move respectively.
Output Format :
For each test case, output in a single line 𝚈𝙴𝚂 if they would be able to meet each other at a common cell, else output 𝙽𝙾.
You may print each character of the string in uppercase or lowercase (for example, the strings 𝚈𝚎𝚂, 𝚢𝙴𝚜, 𝚢𝚎𝚜 and 𝚈𝙴𝚂 will all be treated as identical).

Constraints :
1≤T≤1000
2≤N,M≤106
1≤X,Y≤109

Sample Input 1 :
4
2 2 2 1
2 2 1 1
2 2 1 2
2 3 3 3

Sample Output 1 :
Yes
No
Yes
Yes

Explanation :
Test case 1: Alice is initially at (1,1), and Bob is at (2,2). 
In Alice's first move, she has to take 2 steps - she can choose to go from (1,1)→(1,2)→(2,2). 
And so at the end of Alice's first move, Alice and Bob meet, and they stop. So the answer is Yes.

Test case 2: Alice is initially at (1,1), and Bob is at (2,2). 
In Alice's first move, she has to take 1 step - she can choose to go from (1,1)→(1,2), or (1,1)→(2,1). Similarly for Bob. 
But you can check that no matter what they do, they can't coordinate in such a way that they meet only after Alice's move. So the answer is No.

Test case 3: Alice is initially at (1,1), and Bob is at (2,2). 
In Alice's first move, she has to take 1 step - she can choose to go from (1,1)→(1,2). 
Then in Bob's move, he has to take 2 steps - he can choose to go from (2,2)→(2,1)→(2,2). 
Then in Alice's second move, she can choose to go from (1,2)→(2,2). 
And so at the end of Alice's second move, Alice and Bob meet, and they stop. So the answer is Yes.

Test case 4: Alice is initially at (1,1), and Bob is at (2,3). 
In Alice's first move, she has to take 3 steps - she can choose to go from (1,1)→(1,2)→(1,3)→(2,3). 
And so at the end of Alice's first move, Alice and Bob meet, and they stop. So the answer is Yes.
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
        ll N_rows = 0, M_cols = 0, X_steps = 0, Y_steps = 0;
        cin >> N_rows >> M_cols >> X_steps >> Y_steps;
        
        N_rows += M_cols - 2 + X_steps;
        X_steps += Y_steps;
        if(N_rows % 2 == 1 && X_steps % 2 == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        
    }
	return 0;
}
