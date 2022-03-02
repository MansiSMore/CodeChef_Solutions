/*
A particular month has 30 days, numbered from 1 to 30.
Day 1 is a Monday, and the usual 7-day week is followed (so day 2 is Tuesday, day 3 is Wednesday, and so on).
Every Saturday and Sunday is a holiday. There are N festival days, which are also holidays.
Note that it is possible for a festival day to occur on a Saturday or Sunday.
You are given the dates of the festivals. Determine the total number of holidays in this month.

Input Format :
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer N denoting the number of festival days.
The second line of each test case contains N distinct space-separated integers A1,A2,…AN, denoting the festival days. 
Note that the Ai are not necessarily given in sorted order.

Output Format :
For each test case, output a new line containing the total number of holidays.

Constraints :
1≤T≤1000
1≤N≤30
1≤Ai≤30
All the Ai are distinct

Sample Input 1 :
3
2
5 7
3
23 1 6
1
13

Sample Output 1 :
9
10
8

Explanation :
Test Case 1: Days 6,13,20 and 27 are Saturdays, and days 7,14,21,28 are Sundays. The festivals fall on day 5 and day 7, but day 7 is already a Sunday. 
This gives us 9 holidays in total — days 5,6,7,13,14,20,21,27,28.

Test Case 2: Days 6,13,20 and 27 are Saturdays, and days 7,14,21,28 are Sundays. The festivals fall on day 1, day 6, and day 23. 
This gives us 10 holidays in total — days 1,6,7,13,14,20,21,23,27,28.

Test Case 3: Days 6,13,20 and 27 are Saturdays, and days 7,14,21,28 are Sundays. The only festival is on day 13, which is already a holiday. 
This gives us 8 holidays in total — days 6,7,13,14,20,21,27,28.

*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int N = 0, cnt = 8;
        cin >> N;
        
        int arr[N];
    
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if(arr[i] == 6 || arr[i] == 13 || arr[i] == 20 || arr[i] == 27 || arr[i] == 7 ||arr[i] == 14 || arr[i] == 21 || arr[i] == 28)
                cnt -= 1;
            cnt += 1;
        }
        cout << cnt << endl;
    }
	return 0;
}
