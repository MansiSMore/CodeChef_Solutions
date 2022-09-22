/*
Alice has an array of N integers — A1,A2,…,AN. She wants the product of all the elements of the array to be a non-negative integer. 
That is, it can be either 0 or positive. But she doesn't want it to be negative.
To do this, she is willing to remove some elements of the array. 
Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.

Input Format :
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains a single integer N — the number of elements in the array originally.
The next line contains N space-separated integers — A1,A2,…,AN, which are the original array elements.

Output Format :
For each test case, output on a new line the minimum number of elements that she has to remove from the array.

Constraints :
1≤T≤100
2≤N≤10000
−1000≤Ai≤1000

Sample Input 1 :
4
3
1 9 8
4
2 -1 9 100
4
2 -1 0 100
4
2 -1 -1 100

Sample Output 1 :
0
1
0
0

Explanation :
Test case 1: The product of the elements of the array is 1×9×8=72, which is already non-negative. 
Hence no element needs to be removed, and so the answer is 0.

Test case 2: The product of the elements of the array is 2×−1×9×100=−1800, which is negative. 
Alice can remove the element −1, and the product then becomes non-negative. Hence the answer is 1.

Test case 3: The product of the elements of the array is 2×−1×0×100=0, which is already non-negative. 
Hence no element needs to be removed, and so the answer is 0.

Test case 4: The product of the elements of the array is 2×−1×−1×100=200, which is already non-negative. 
Hence no element needs to be removed, and so the answer is 0.
*/

#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_elements = 0;
        cin >> N_elements;
        
        int arr[N_elements] = {0}, iCnt1 = 0, iCnt2 = 0;
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
            if(arr[i] < 0)
            {
                iCnt1++;
            }
            if(arr[i] == 0)
            {
                iCnt2++;
            }
        }
        
        if(iCnt1 % 2 == 1 && iCnt2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
	return 0;
}
