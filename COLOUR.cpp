/*
For the human eye, primary colours are red, green, and blue.
Combining 1 drop each of any two primary colours produces a new type of secondary colour. 
For example, mixing red and green gives yellow, mixing green and blue gives cyan, and, mixing red and blue gives magenta.
You have X,Y, and Z drops of red, green, and blue colours respectively. 
Find the maximum total number of distinct colours (both primary and secondary) you can have at any particular moment.
Note: You cannot mix a secondary colour with a primary or another secondary colour to get a new type of colour.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three space separated integers X,Y, and Z, the number of drops of red, green, and blue colours respectively.

Output Format :
For each test case, output on a new line the maximum total number of colours (both primary and secondary) you can have using the given primary colours.

Constraints :
1≤T≤105
0≤X,Y,Z≤100

Sample Input 1 :
4
1 0 1
3 3 0
1 1 1
0 0 0

Sample Output 1 :
2
3
3
0

Explanation :
Test case 1: We have 1 drop each of red and blue colour. If we mix these colours, we will have magenta but no red or blue. 
Thus, to maximize the total number of colours, it is better that we keep the red and blue colours as it is. 
The maximum number of colours we can have is 2.

Test case 2: We have 3 drops each of red and green colour. We can use 1 drop each of red and green to have yellow. 
We still have 2 drops each of red and green left. Thus, we have 3 different types of colours now.

Test case 3: If we mix any two colours, we will loose two colours and get only one colour in return. 
Thus, it is best to keep all colours as it is and keep 3 different varieties of colours.

Test case 4: There are no types of colours available.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int colours[3] = {0};
        for(int i = 0; i < 3; i++)
        {
            cin >> colours[i];
        }
        
        int ans = 0;
        for(int i = 0; i < 3; i++)
        {
            if(colours[i] != 0)
            {
                colours[i]--;
                ans++;
            }
        }
        
        sort(colours, colours + 3);
        
        if(colours[0] >= 2)
        {
            cout << ans + 3 << endl;
        }   
        else if(colours[0] == 1)
        {
            if(colours[2] >= 2)
                cout << ans + 2 << endl;
            else
                cout << ans + 1 << endl;
        }
        else
        {
            if(colours[1] == 0)
                cout << ans << endl;
            else
                cout << ans + 1 << endl;
        }
        
    }

	return 0;
}
