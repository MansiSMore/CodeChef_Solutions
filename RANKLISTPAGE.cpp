/*
Chef participated in a contest and got a rank X.
Chef is trying to find his name in the ranklist but there are too many pages.
Each page consists of 25 participants. Chef wants to find the exact page number which contains his name.
Help Chef find the page number.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer X - denoting the rank of Chef.

Output Format :
For each test case, output the page number of the ranklist containing Chef's name.

Constraints :
1≤T≤1000
1≤X≤1000

Sample Input 1 :
4
1
34
150
74

Sample Output 1 :
1
2
6
3

Explanation :
Test case 1: Since each page has 25 participants, the first page has participants with rank 1 to 25. Thus, Chef can find his name in page number 1.

Test case 2: Since each page has 25 participants, the first page has participants with rank 1 to 25 and the second page has participants with rank 26 to 50. 
Thus, Chef can find his name in page number 2.

Test case 3: Chef will find his name in page number 6. The sixth page consists of participants with ranks 126 to 150.

Test case 4: Chef will find his name in page number 3. The third page consists of participants with ranks 51 to 75.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_rank = 0;
        cin >> X_rank;
        
        if(X_rank % 25 == 0)
            cout << X_rank / 25 << endl;
        else
            cout << X_rank / 25 + 1<< endl;
    }
	return 0;
}
