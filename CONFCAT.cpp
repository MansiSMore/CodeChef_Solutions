/*
Chef initially had two non-empty arrays A and B, where both arrays contain distinct elements. 
Moreover, there is no common element in the arrays A and B.
Chef forms another array C from the arrays A and B using the following process :
Let X denote the leftmost element of array A and Y denote the leftmost element of array B.
If Y is smaller than X, delete Y from B and append it to the end of C.
If X is smaller than Y, delete X from A and append it to the end of C.
If either array A or B becomes empty, append all the remaining elements of the other array to the end of C.
Chef forgot the arrays A and B but remembers the array C. Find any two valid non-empty arrays A and B that will yield the given array C. 
If it is not possible, print −1.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a space-separated integer N — the number of elements in array C.
The next line contains N space-separated integers denoting the elements of the array C.

Output Format :
For each test case, if a solutions exists, print any two valid arrays A and B along with their lengths respectively . 
For example, if A=[1,7] and B=[4,10,2], then print it as :
2 
1 7
3
4 10 2
Else, if answer doesn't exist, print −1 in a single line.

Constraints :
1≤T≤100
1≤N≤105
−105≤Ci≤105
The sum of N over all test cases won't exceed 106.

Sample Input 1 :
2
6
7 6 3 8 2 9
2
2 1

Sample Output 1 :
3
7 6 3
3
8 2 9
-1

Explanation :
Test case 1: We have A=[7,6,3] and B=[8,2,9].
Move 1: X=7 and Y=8. Since X<Y, we delete X and append it to C. Thus, A=[6,3],B=[8,2,9], and C=[7].
Move 2: X=6 and Y=8. Since X<Y, we delete X and append it to C. Thus, A=[3],B=[8,2,9], and C=[7,6].
Move 3: X=3 and Y=8. Since X<Y, we delete X and append it to C. Thus, A=[],B=[8,2,9], and C=[7,6,3].
Now, since A is empty, append all elements of B to C. Thus, C=[7,6,3,8,2,9].

Test case 2: It can be shown that there exist no valid non-empty arrays A and B.
*/
#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_length = 0;
        cin >> N_length;
        
        int crr[N_length] = {0};
        for(int i = 0; i < N_length; i++)
        {
            cin >> crr[i];
        }
        
        int mm1 = 0;
        int mm = *max_element(crr, crr + N_length);
        for(int i = 0; i < N_length; i++)
        {
            if(crr[i] == mm)
                mm1 = i;
        }
        
        if(mm1 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mm1 << endl;
            for(int i = 0; i < mm1; i++)
            {
                cout << crr[i] << " ";
            }
            cout << endl;
            cout << N_length - mm1 << endl;
            for(int i = mm1; i < N_length; i++)
            {
                cout << crr[i] << " ";
            }
            cout << endl;
        }
    }
	return 0;
}
