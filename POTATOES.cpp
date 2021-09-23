/*
Farmer Feb has three fields with potatoes planted in them. 
He harvested x potatoes from the first field, y potatoes from the second field and is yet to harvest potatoes from the third field. 
Feb is very superstitious and believes that if the sum of potatoes he harvests from the three fields is a prime number (http://en.wikipedia.org/wiki/Prime_number),
he'll make a huge profit. Please help him by calculating for him the minimum number of potatoes that if harvested from the third field will make the 
sum of potatoes prime. At least one potato should be harvested from the third field.

Input :
The first line of the input contains an integer T denoting the number of test cases. 
Each of the next T lines contain 2 integers separated by single space: x and y.

Output :
For each test case, output a single line containing the answer.

Constraints
1 ≤ T ≤ 1000
1 ≤ x ≤ 1000
1 ≤ y ≤ 1000
 
Example
Input:
2
1 3
4 3

Output:
1
4

Explanation :
In example case 1: the farmer harvested a potato from the first field and 3 potatoes from the second field. 
The sum is 4. If he is able to harvest a potato from the third field, that will make the sum 5, which is prime. 
Hence the answer is 1(he needs one more potato to make the sum of harvested potatoes prime.)

*/
#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int T = 0;
	cin >> T;
	while(T--)
	{
	    int x = 0, y = 0, k = 0;
	    cin >> x >> y;
	    int sum = x + y;
	    int z = 0;
	    for(int i = 1; i < 2003; i++)
	    {     
	        k = sum + i;
	        for(int j = 2; j < k; j++)
	        {
	            if(k % j == 0)
	            {
	                z = 0;
	                break;
	            }
	            else
	            {
	                z = 1;
	            }
	        }  
	    
	        if(z == 1)
	        {
	            cout << i << endl;
	            break;
	        }
	    }
	}
	return 0;
}
