/*
Chef is given 3 integers A,B, and C such that A<B<C.
Chef needs to find the value of max(A,B,C)−min(A,B,C). 
Here max(A,B,C) denotes the maximum value among A,B,C while min(A,B,C) denotes the minimum value among A,B,C.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 3 integers A,B,C.

Output Format:
For each test case, output the value of max(A,B,C)−min(A,B,C).

Constraints:
1≤T≤10
1≤A<B<C≤10

Sample Input 1: 
4
1 3 10
5 6 7
3 8 9
2 5 6

Sample Output 1:
9
2
6
4

Explanation:
Test case 1: Here, max(1,3,10)=10 and min(1,3,10)=1. Thus, the difference is 9.

Test case 2: Here, max(5,6,7)=7 and min(5,6,7)=5. Thus, the difference is 2.

Test case 3: Here, max(3,8,9)=9 and min(3,8,9)=3. Thus, the difference is 6.

Test case 4: Here, max(2,5,6)=6 and min(2,5,6)=2. Thus, the difference is 4.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int A_int = 0, B_int = 0, C_int = 0;
        cin >> A_int >> B_int >> C_int;
        
        int max_ABC = 0, min_ABC = 0;
        if(A_int > B_int && A_int > C_int)
            max_ABC = A_int;
        else if(B_int > C_int && B_int > A_int)
            max_ABC = B_int;
        else
            max_ABC = C_int;
        
        if(A_int < B_int && A_int < C_int)
            min_ABC = A_int;
        else if(B_int < C_int && B_int < A_int)
            min_ABC = B_int;
        else
            min_ABC = C_int;
          
        cout << max_ABC - min_ABC << endl;  
            
    }
	return 0;
}
