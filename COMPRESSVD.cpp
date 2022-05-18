/*
Chef recorded a video explaining his favorite recipe. However, the size of the video is too large to upload on the internet. 
He wants to compress the video so that it has the minimum size possible.
Chef's video has N frames initially. The value of the ith frame is Ai. Chef can do the following type of operation any number of times:
Choose an index i (1≤i≤N) such that the value of the ith frame is equal to the value of either of its neighbors and remove the ith frame.
Find the minimum number of frames Chef can achieve.

Input Format :
First line will contain T, the number of test cases. Then the test cases follow.
The first line of each test case contains a single integer N - the number of frames initially.
The second line contains N space-separated integers, A1,A2,…,AN - the values of the frames.

Output Format :
For each test case, output in a single line the minimum number of frames Chef can achieve.

Constraints :
1≤T≤1000
1≤N≤105
1≤Ai≤106
Sum of N over all test cases does not exceed 2⋅105.

Sample Input 1 :
4
1
5
2
1 1
3
1 2 3
4
2 1 2 2
Sample Output 1 :
1
1
3
3
Explanation :
Test case 1: There is only one frame with value 5. 
Since there are no neighbors, Chef won't remove any frame and the minimum number of frames Chef can achieve is 1.

Test case 2: There are two frames where both frames have value 1. 
Chef can remove the first frame as the value of the first frame is equal to that of the second frame. The remaining frames have values [1]. 
The minimum number of frames Chef can achieve is 1.

Test case 3: There are 3 frames. All frames have distinct values. 
Thus, the minimum number of frames Chef can achieve is 3.

Test case 4: Chef can remove the fourth frame as the value of the fourth frame is equal to that of the third frame. 
The remaining frames have values [2,1,2]. Thus, the minimum number of frames Chef can achieve is 3.
*/
#include <iostream>
#include <set>
using namespace std;
#define ll long long

int main() 
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        ll N_elements = 0;
        cin >> N_elements;
        ll arr[N_elements];
        
        for(int i = 0; i < N_elements; i++)
        {
            cin >> arr[i];
        }
        
        ll cnt = N_elements;
        for(int i = 0; i < N_elements - 1; i++)
        {
            if(arr[i] == arr[i + 1])
            {
                cnt--;
            }
            
        }
        
        cout << cnt << endl;
    }
	return 0;
}
