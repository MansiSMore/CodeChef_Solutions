/*
You have N cards placed in front of you on the table. The ith card has the number Ai written on it.
In one move, you can remove any one card from the remaining cards on the table.
Find the minimum number of moves required so that all the cards remaining on the table have the same number written on them.

Input Format :
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the number of cards on the table.
The second line of each test case contains N space-separated integers A1,A2,…,AN where Ai is the number written on the ith card.

Output Format :
For each test case, output the minimum number of moves required so that all the cards remaining on the table have the same number written on them.

Constraints :
1≤T≤100
1≤N≤100
1≤Ai≤10

Sample Input 1 :
3
5
1 1 2 2 3
4
8 8 8 8
6
5 6 7 8 9 10

Sample Output 1 :
3
0
5

Explanation :
Test case 1: The minimum number of moves required such that all remaining cards have same values is 3:
Move 1: Remove a card with number 1. Remaining cards are [1,2,2,3].
Move 2: Remove a card with number 1. Remaining cards are [2,2,3].
Move 3: Remove a card with number 3. Remaining cards are [2,2].

Test case 2: All cards have the same number initially. Thus, no moves are required.

Test case 3: The minimum number of moves required such that all remaining cards have same values is 5:
Move 1: Remove a card with number 5. Remaining cards are [6,7,8,9,10].
Move 2: Remove a card with number 6. Remaining cards are [7,8,9,10].
Move 3: Remove a card with number 7. Remaining cards are [8,9,10].
Move 4: Remove a card with number 8. Remaining cards are [9,10].
Move 5: Remove a card with number 9. Remaining cards are [10].
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_elements = 0;
        cin >> N_elements;
        
        int arr[N_elements] = {0};
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
        }
        int maxcnt = 0, i = 0;
        for(i = 0; i < N_elements - 1; i++)
        {
            int cnt = 0;
            for(int j = i + 1; j < N_elements; j++)
            {
                if(arr[i] == arr[j])
                {
                    cnt++;
                }
            }
            if(cnt > maxcnt)
            {
                maxcnt = cnt;
            }
        }
        cout << i - maxcnt << endl;
    }
	return 0;
}
