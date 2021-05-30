/*
Chef knows about two languages spoken in Chefland, but he is not proficient in any of them. 
The first language contains lowercase English letters between 'a' and 'm' inclusive and the second language contains only uppercase English letters 
between 'N' and 'Z' inclusive.
Due to Chef's limited vocabulary, he sometimes mixes the languages when forming a sentence — each word of Chef's sentence contains only characters 
from one of the languages, but different words may come from different languages.
You are given a sentence as a sequence of K words S1,S2,…,SK. Determine whether it could be a sentence formed by Chef, i.e. 
if it contains only the characters from the two given languages and each word contains only characters from a single language.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer K followed by a space and K space-separated strings S1,S2,…,SK.

Output :
For each test case, print a single line containing the string "YES" if the given sentence can be formed by Chef or "NO" if it cannot.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints :
1≤T≤105
1≤K≤10
1≤|Si|≤100 for each valid i
the sum of lengths of all the strings on the input does not exceed 105
each string contains only lowercase and uppercase English letters

Example Input :
3
1 aN
2 ab NO
3 A N D

Example Output :
NO
YES
NO

Explanation :
Example case 1: A single word cannot contain characters from both languages.
Example case 2: This could be a sentence formed by Chef since each word contains only characters from a single language.
Example case 3: Letters 'A' and 'D' do not belong to either of the two languages.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;

    while(T--)
    {
        int K = 0;
        cin >> K;
        
        vector<string> vobj;
        vector<string> v;
        
        for(int i = 0; i < K; i++)
        {
            string s;
            cin >> s;
            vobj.push_back(s);
        }
        
        for(int i = 0; i < vobj.size(); i++)
        {
            int cnt1 = 0, cnt2 = 0;
            for(int j = 0; j < vobj[i].size(); j++)
            {
                //cout << vobj[i][j] << endl;
                if(vobj[i][j] >= 'a' && vobj[i][j] <= 'm')
                    cnt1++;
                else if(vobj[i][j] >= 'N' && vobj[i][j] <= 'Z')
                    cnt2++;
            }
            
            //cout << vobj[i].size();
            if(cnt1 == vobj[i].size() || cnt2 == vobj[i].size())
                v.push_back("YES");
            else
				v.push_back("NO");
        }
        
        bool bret = false;
        for(int i = 0; i < K; i++)
        {
        	if(v[i] == "NO")
        	{
				bret = false;
        		break;
        	}
        	else
        		bret = true;
        }
        
        if(bret == false)
        	cout << "NO\n";
        else
        	cout << "YES\n";
    }
	return 0;
}
