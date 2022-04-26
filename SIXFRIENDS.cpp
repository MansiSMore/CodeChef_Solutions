/*
Six friends go on a trip and are looking for accommodation. After looking for hours, 
they find a hotel which offers two types of rooms — double rooms and triple rooms. A double room costs Rs. X, while a triple room costs Rs. Y.
The friends can either get three double rooms or get two triple rooms. Find the minimum amount they will have to pay to accommodate all six of them.

Input Format :
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X and Y - the cost of a double room and the cost of a triple room.

Output Format :
For each testcase, output the minimum amount required to accommodate all the six friends.

Constraints :
1≤T≤100
1≤X<Y≤100

Sample Input 1 :
3
10 15
6 8
4 8

Sample Output 1 :
30
16
12

Explanation :
Test case 1: The friends can take three double rooms and thus pay a total of Rs. 30.
Test case 2: The friends can take two triple rooms and thus pay a total of Rs. 16.
Test case 3: The friends can take three double rooms and thus pay a total of Rs. 12.
*/
#include <iostream>
using namespace std;

int main() 
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int X_double_room_cost = 0, Y_triple_room_cost = 0;
        cin >> X_double_room_cost >> Y_triple_room_cost;
        
        if(3 * X_double_room_cost < 2 * Y_triple_room_cost)
        {
            cout << 3 * X_double_room_cost << endl;
        }
        else{
            cout << 2 * Y_triple_room_cost << endl;
        }
    }
	return 0;
}
