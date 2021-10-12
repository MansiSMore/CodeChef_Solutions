/*
You are given a sorted list A of size N.You have to make a new list B such that B[i] is equal to the number of elements strictly greater than A[i] in the list A.
Print the new list.

Input :
The first line consists of T, denoting the number of test cases.
First line of each test case consists of one integer denoting N, where N is the size of the list given to you.
Second line of each test case contains the list given to you containing N elements.

Output :
For each test case print the list in a single line and the elements of the list should be separated by space.
Print the answer to each test case in a new line.

Constraints :
1≤T≤100 , where T is the number of test cases.
1≤N≤100, where N is the number of elements in the list.
1≤A[i]≤1000000 ,where A[i] is the ith element in the list given to you.

Subtasks :
15 points: All the elements in the list given to you are distinct.
35 points: Original constraints: Elements can be repeated in the list.

Sample Input :
2
4
1 2 4 4
5
1 2 2 2 2

Sample Output :
3 2 0 0
4 0 0 0 0

Explanation :
The explanation for test case 1 of sample input :
The first element in the new list is 3 since the first element in the previous list was 1, and there are three elements which are strictly greater than 1, 
that is 2, 4 and 4.
The second element in the new list is 2 since the second element in the previous list was 2, and there are two elements which are strictly greater than 2, 
that is 4 and 4.
The third and fourth element in the new list is 0 since third and fourth element in the previous list was 4 and there are no elements which are strictly 
greater than them.
*/

#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        int N = 0, cnt = 0;
        cin >> N;
        
        int arr[N], brr[N];
        
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        
	    for(int i = 0; i < N - 1; i++)
	    {
	        cnt = 0;
	        for(int j = i + 1; j < N; j++)
	        {
	            if(arr[j] > arr[i])
	            {
	                cnt++;
	            }
	        }
	        brr[i] = cnt;
	    }
	    
	    brr[N - 1] = 0;
	    
	    for(int i = 0; i < N; i++)
	    {
	        cout << brr[i] << " ";
	    }
	    
	    cout << endl;
	    
    }
}
