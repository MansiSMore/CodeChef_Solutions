/*
You are given an integer N. Construct a permutation A of length N which is attractive.
A permutation is called attractive if the bitwise XOR of all absolute differences of adjacent pairs of elements is equal to 0.
Formally, a permutation A=[A1,A2,…,AN] of length N is said to be attractive if:
|A1−A2|⊕|A2−A3|⊕…⊕|AN−1−AN|=0
where ⊕ denotes the bitwise XOR operation.
Output any attractive permutation of length N. If no attractive permutation exists, print −1 instead.
Note: A permutation of length N is an array A=[A1,A2,…,AN] such that every integer from 1 to N occurs exactly once in A. 
For example, [1,2,3] and [2,3,1] are permutations of length 3, but [1,2,1], [4,1,2], and [2,3,1,4] are not.

Input Format :
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input, containing one integer N.
Output Format :
For each test case, output on a single line an attractive permutation of N integers, or −1 if no attractive permutation exists.

Constraints :
1≤T≤1000
2≤N≤105
Sum of N over all cases won't exceed 2⋅105.

Sample Input 1 :
2
3
6

Sample Output 1 :
3 2 1
5 2 3 6 4 1 

Explanation :
Test Case 1: |3−2|⊕|2−1|=1⊕1=0
Note that there are other correct answers — for example, [1,2,3] would also be accepted as correct.

Test Case 2: |5−2|⊕|2−3|⊕|3−6|⊕|6−4|⊕|4−1|=3⊕1⊕3⊕2⊕3=0
*/

#include <iostream>
using namespace std;

void print_xor(int N)
{
    int arr[N];
    arr[0] = N - 1, arr[1] = 2, arr[2] = 3, arr[3] = N, arr[4] = 4;
    
    for(int i = 5; i < N - 1; i++)
    {
        arr[i] = i;
    }
    arr[N - 1] = 1;
    
    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main() {
  // your code goes here
  int T = 0;
  cin >> T;
  
  while(T--)
  {
      int N = 0;
      cin >> N;
      if(N % 2 == 1)
      {
          for(int i = N; i >= 1; i--)
              cout << i << " ";
      }
      else if(N == 4)
      {
          cout << 3 << " " << 2 << " " << " " << 4 << " "<< 1;
      }
      else if(N == 2)
      {
          cout << -1;
      }
      else if(N % 2 == 0)
          print_xor(N);
      cout << endl;
      
  }
  return 0;
}
