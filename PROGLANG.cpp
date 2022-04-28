/*
Chef is a software developer, so he has to switch between different languages sometimes. 
Each programming language has some features, which are represented by integers here.
Currently, Chef has to use a language with two given features A and B. 
He has two options --- switching to a language with two features A1 and B1, or to a language with two features A2 and B2. 
All four features of these two languages are pairwise distinct.
Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).

Input Format :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers A,B,A1,B1,A2,B2.

Output Format :
For each test case, print a single line containing the integer 1 if Chef should switch to the first language, 
or 2 if Chef should switch to the second language, or 0 if Chef cannot switch to either language.

Constraints :
1≤T≤288
1≤A,B,A1,B1,A2,B2≤4
A,B are distinct
A1,B1,A2,B2 are pairwise distinct

Subtasks :
Subtask #1 (100 points): original constraints

Sample Input 1 :
3
1 2 2 1 3 4
3 4 2 1 4 3
1 2 1 3 2 4

Sample Output 1 :
1
2
0

Explanation :
Example case 1: The first language has the required features --- features 1 and 2.
Example case 2: The second language has the required features --- features 3 and 4.
Example case 3: Neither language has both features 1 and 2.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int A_feature = 0, B_feature = 0, A1_feature = 0, B1_feature = 0, A2_feature = 0, B2_feature = 0;
        cin >> A_feature >> B_feature >> A1_feature >> B1_feature >> A2_feature >> B2_feature;
        
        if((A_feature == A1_feature || A_feature == B1_feature) && (B_feature == A1_feature || B_feature == B1_feature))
        {
            cout << 1 << endl;
        }
        else if((A_feature == A2_feature || A_feature == B2_feature) && (B_feature == A2_feature || B_feature == B2_feature))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
	return 0;
}
