/*
Dazzler has a blank canvas and (N−1) colours numbered from 2 to N.
Let B denote the beauty of the canvas. The beauty of a blank canvas is 1.
Dazzler paints the canvas by using all the (N−1) colours exactly once. On applying the ith colour (2≤i≤N):
If i is odd, B=B & i.
If i is even, B=B⊕i.
Find the beauty of the canvas after applying all (N−1) colours.

Note: The colours are applied in ascending order. Colour number 2 is applied first. 
The ith numbered colour is applied after (i−1)th numbered colour for all i>2.
Here & and ⊕ denote the bitwise AND and bitwise XOR operations respectively.

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a single integer N.

Output Format :
For each test case, output a single integer, the beauty of the canvas after applying all (N−1) colours.

Constraints :
1≤T≤105
2≤N≤1016

Sample Input 1 :
2
4
10

Sample Output 1 :
7
3

Explanation :
Initially, B=1.
On applying colour 2: Since 2 is even, B=B⊕2=1⊕2=3.
On applying colour 3: Since 3 is odd, B=B&3=3&3=3.
On applying colour 4: Since 4 is even, B=B⊕4=3⊕4=7.
On applying colour 5: Since 5 is odd, B=B&5=7&5=5.
On applying colour 6: Since 6 is even, B=B⊕6=5⊕6=3.
On applying colour 7: Since 7 is odd, B=B&7=3&7=3.
On applying colour 8: Since 8 is even, B=B⊕8=3⊕8=11.
On applying colour 9: Since 9 is odd, B=B&9=11&9=9.
On applying colour 10: Since 10 is even, B=B⊕10=9⊕10=3.

Test case 1: There are 3 colours numbered 2,3, and 4. Initially, B=1.
The final beauty of the canvas is 7.

Test case 2: There are 9 colours numbered 2,3,4,5,6,7,8,9, and 10. Initially, B=1.
The final beauty of the canvas is 3.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        long long N_colours = 0;
        cin >> N_colours;
        
        //We are using 4 because we found first different value at 4.
        if(N_colours % 4 == 1)
        {
            cout << N_colours << endl;
        }
        else if(N_colours % 4 == 2 || N_colours % 4 == 3)
        {
            cout << 3 << endl;
        }
        else if(N_colours % 4 == 0)
        {
            cout << N_colours + 3 << endl;
        }
    }
	return 0;
}
