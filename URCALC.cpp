/*
Write a program to obtain 2 numbers (( AA andand BB )) and an arithmetic operator (C)(C) and 
then design a calculatorcalculator depending upon the operator entered by the user.
So for example if C="+", you have to sum the two numbers.
If C="-", you have to subtract the two numbers.
If C=" * ", you have to print the product.
If C=" / ", you have to divide the two numbers.

Input:
First line will contain the first number AA.
Second line will contain the second number BB.
Third line will contain the operator CC, that is to be performed on A and B.
Output:
Output a single line containing the answer, obtained by, performing the operator on the numbers. 
Your output will be considered to be correct if the difference between your output and the actual answer is not more than 10^{-6}10 −6
 
Constraints :
-1000 \leq A \leq 1000−1000≤A≤1000
-1000 \leq B \leq 1000−1000≤B≤1000 andand B \neq 0B=0
CC cancan onlyonly bebe oneone ofof thesethese 44 operatorsoperators {" + ", " - ", " * ", " / "}

Sample Input:
8
2
/
Sample Output:
4.0

Sample Input:
5
3
+
Sample Output:
8
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double A = 0, B = 0;
    char ch = '\0';
    cin >> A >> B >> ch;
    
    if(ch == '+')
    {
        cout << A + B << endl;
    }
    else if(ch == '-')
    {
        cout << A - B << endl;
    }
    else if(ch == '*')
    {
        cout << A * B << endl;
    }
    else if(ch == '/')
    {
        cout << fixed << double(A / B) << endl;
    }
	return 0;
}
