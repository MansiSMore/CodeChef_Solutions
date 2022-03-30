/*
According to the new tax scheme, a new tax called the binary string tax was introduced! JJ has a binary string S of length N. 
According to the tax scheme, for every occurrence of 01 in S, a tax of X rupees will be charged, while for every occurrence of 10 in S, 
a tax of Y rupees will be charged.
For example, if X=5, Y=7 and S=11010, then S has 1 occurrence of 01 and 2 occurrences of 10, so the tax charged =5⋅1+7⋅2=19
JJ can rearrange the string S in any way he wants. He wants to minimize the amount of tax he has to pay. Can you help him do so?

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains three integers N, X and Y - the length of the binary string S, 
the tax charged on an occurrence of 01 and the tax charged on an occurrence of 10.
The second line of each test case contains a binary string S of length N containing 0s and 1s only.

Output Format :
For each test case, output the minimum amount of tax that JJ has to pay.

Constraints :
1≤T≤100
2≤N≤1000
1≤X,Y≤100

Sample Input 1 :
2
4 7 3
1101
5 3 4
00000

Sample Output 1 :
3
0

Explanation :
Test Case 1: JJ can rearrange S to 1110 for which the tax charged will be 3 which is the minimum value of tax.
Test Case 2: The tax charged for the string S=00000 is 0 which can not be reduced further.

*/
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int length_N = 0, tax_X = 0, tax_Y = 0, min_tax_charged = 0;
        cin >> length_N >> tax_X >> tax_Y;
        
        string binary_string_s;
        cin >> binary_string_s;

        if(tax_X < tax_Y)
        {
            int i = 0, j = length_N - 1;
            //I tried to sort like 000111
            while(i < j)
            {
                if(binary_string_s[i] == '1')
                {
                    swap(binary_string_s[i], binary_string_s[j]);
                    j--;
                }
                else
                {
                    i++;
                }
            }
            //for all 1's and for all 0's 
            if(binary_string_s[length_N - 1] == '0' || binary_string_s[0] == '1')
                min_tax_charged = 0;
            else
                min_tax_charged = tax_X;
        }
        else
        {
            int i = 0, j = length_N - 1;
            //I tried to sort like 111000
            while(i < j)
            {
                if(binary_string_s[i] == '0')
                {
                    swap(binary_string_s[i], binary_string_s[j]);
                    j--;
                }
                else
                {
                    i++;
                }
            }
            //for all 1's and for all 0's 
            if(binary_string_s[length_N - 1] == '1' || binary_string_s[0] == '0')
                min_tax_charged = 0;
            else
                min_tax_charged = tax_Y;        
        }
        cout << min_tax_charged << endl;
    }
	return 0;
}
