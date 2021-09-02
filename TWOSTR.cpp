/*
Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. 
The wildcard character '?' can be substituted by any single lower case English letter for matching. 
He has two strings X and Y of equal length, made up of lower case letters and the character '?'. 
He wants to know whether the strings X and Y can be matched or not.

Input :
The first line of input contain an integer T denoting the number of test cases. 
Each test case consists of two lines, the first line contains the string X and the second contains the string Y.

Output :
For each test case, output a single line with the word Yes if the strings can be matched, otherwise output No.

Constraints :
1 ≤ T ≤ 50
Both X and Y have equal length and the length is between 1 and 10.
Both X and Y consist of lower case letters and the character '?'.

Example
Input:
2
s?or?
sco??
stor?
sco??

Output:
Yes
No

Explanation :
First Example: There are several ways the two strings can be matched, one of those is "score".
Second Example: There is no way to match the strings.

*/
#include <iostream>
#include <string>

using namespace std;

bool find(string x,string y)
{   
    char ch='?';
    for (int i=0;i<x.size();i++)
    {
        if (x[i]!=y[i] && x[i]!=ch && y[i]!=ch)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t>0){
        string x,y;
        cin>>x;
        cin>>y;
        bool result=find(x,y);
            if (result==false){
                std::cout << "No" << std::endl;
            }
            else{
               std::cout << "Yes" << std::endl;
            }
        t--;
    }
    
}
    
