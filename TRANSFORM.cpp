/*
Mario transforms each time he eats a mushroom as follows:
If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.

Given that Mario was initially normal, find his size after eating X mushrooms.

Input Format :
The first line of input will contain one integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing one integer X.

Output Format :
For each test case, output in a single line Mario's size after eating X mushrooms.

Print:
𝙽𝙾𝚁𝙼𝙰𝙻, if his final size is normal.
𝙷𝚄𝙶𝙴, if his final size is huge.
𝚂𝙼𝙰𝙻𝙻, if his final size is small.
You may print each character of the answer in either uppercase or lowercase (for example, 
the strings 𝙷𝚞𝚐𝚎, 𝚑𝚄𝚐𝙴, 𝚑𝚞𝚐𝚎 and 𝙷𝚄𝙶𝙴 will all be treated as identical).

Constraints :
1≤T≤100
1≤X≤100

Sample Input 1 :
3
2
4
12

Sample Output 1 :
SMALL
HUGE
NORMAL

Explanation :
Test case 1: Mario's initial size is normal. On eating the first mushroom, he turns huge. On eating the second mushroom, he turns small.
Test case 2: Mario's initial size is normal. On eating the first mushroom, he turns huge. On eating the second mushroom, he turns small. 
On eating the third mushroom, he turns normal. On eating the fourth mushroom, he turns huge.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_mushrooms = 0;
        cin >> X_mushrooms ;
        
        if(X_mushrooms % 3 == 0)
        {
            cout << "normal\n";
        }
        else if(X_mushrooms % 3 == 1)
        {
            cout << "huge\n";
        }
        else
        {
            cout << "small\n";
        }
    }
	return 0;
}
