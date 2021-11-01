/*
Chef lives in Chefcity. Chefcity can be represented as a straight line with Chef's house at point 0 on this line. 
There is an infinite number of subway stations in Chefcity, numbered by positive integers. 
The first station is located at point 1 and for each i ≥ 1, the distance between stations i and i+1 is equal to i+1. 
(Station i+1 is always located at a higher coordinate than station i, i.e., the subway stations are located at points 1, 3, 6, 10, 15 etc.)
Subway trains in Chefcity allow Chef to move between any pair of adjacent stations in one minute, regardless of the distance between them. 
Chef can also move by walking; his walking speed is one unit of distance in one minute. Chef can enter or exit the subway at any station.
Chef has decided to go to the cinema. The only cinema in Chefcity is located at point X. 
(Note that the cinema can be placed at the same point as a subway station.) 
Help Chef determine the minimum possible time required to get to the cinema from his house.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer X.

Output :
For each test case, print a single line containing one integer - the minimum possible travel time.

Constraints :
1 ≤ T ≤ 200
1 ≤ X ≤ 109

Sample Input 1 :
4
1
2
3
9

Sample Output 1 :
1
2
2
5

Explanation :
Example case 4: Chef will walk from x = 0 to x = 1 in one minute, then he will enter the subway and move from station 1 (at x = 1) to station 2 (at x = 3) 
in one minute, then from station 2 to station 3 (at x = 6) in one minute, from station 3 to station 4 (at x = 10) in one minute, and finally, 
he will walk from x = 10 to x = 9 in one minute, which makes the total travel time 5 minutes.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T = 0, N = 0;
    long double x;
    cin >> T;
    
    while(T--)
    {
        cin >> x;
        N = int((sqrt(1 + 8 * x) - 1) / 2);
        cout << min(N - (N * N + N) / 2 + x, N + 1 + ((N + 1) * (N + 1) + N + 1) / 2 - x) << endl;
    }
    return 0;
}
