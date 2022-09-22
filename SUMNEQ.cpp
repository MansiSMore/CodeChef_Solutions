/*
Alice has a positive integer N. She is wondering how many ordered pairs of positive integers (i,j) exist such that i+j=N.
Help Alice figure out the answer.
Note that since the pairs are ordered, (1,2) and (2,1) are considered different.

Input Format :
The first and only line of input contains a single integer N.

Output Format :
Print a single integer, the number of ordered pairs of positive integers (i,j) such that i+j=N.

Constraints :
1≤N≤100

Sample Input 1 :
1
Sample Output 1 :
0
Explanation :
As both integers must be positive, the minimum sum must be 1+1=2. Therefore there are no pairs of positive integers adding up to 1.

Sample Input 2 :
2
Sample Output 2 :
1
Explanation :
(1,1) is the only pair whose sum is 2. Every other pair has a sum of at least 3.

Sample Input 3 :
3
Sample Output 3 :
2
Explanation :
The two pairs are (1,2) and (2,1).
*/

#include <iostream>
using namespace std;

int main() 
{
    int N_integer = 0;
    cin >> N_integer;
    
    cout << N_integer - 1 << endl;
	return 0;
}
