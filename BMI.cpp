/*
You are given the height H (in metres) and mass M (in kilograms) of Chef. The Body Mass Index (BMI) of a person is computed as MH2.
Report the category into which Chef falls, based on his BMI:
Category 1: Underweight if BMI ≤18
Category 2: Normal weight if BMI ∈{19, 20,…, 24}
Category 3: Overweight if BMI ∈{25, 26,…, 29}
Category 4: Obesity if BMI ≥30

Input:
The first line of input will contain an integer, T, which denotes the number of testcases. Then the testcases follow.
Each testcase contains a single line of input, with two space separated integers, M,H, which denote the mass and height of Chef respectively.

Output:
For each testcase, output in a single line, 1,2,3 or 4, based on the category in which Chef falls.

Constraints :
1≤T≤2∗104 
1≤M≤104
1≤H≤102
Its guaranteed that H2 divides M.

Sample Input:
3
72 2
80 2
120 2

Sample Output:
1
2
4

Explanation:
Case 1: Since MH2=7222=18, therefore person falls in category 1.
Case 2: Since MH2=8022=20, therefore person falls in category 2.
Case 3: Since MH2=12022=30, therefore person falls in category 4.

*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    
    while(T--)
    {
        int M = 0, H = 0;
        cin >> M >> H;
        
        int bmi = (M / (H * H));
        
        if(bmi <= 18)
            cout << 1 << endl;
        else if(bmi >= 19 and bmi <= 24)
            cout << 2 << endl;
        else if(bmi >= 25 and bmi <= 29)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }
	return 0;
}
