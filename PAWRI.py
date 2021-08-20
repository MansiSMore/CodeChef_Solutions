# cook your dish here
'''
Lately, Chef has been inspired by the "pawri" meme. Therefore, he decided to take a string S and change each of its substrings that spells "party" to "pawri". 
Find the resulting string.

Input :
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.

Output :
For each test case, print a single line containing the string after it is modified by Chef.

Constraints :
1≤T≤10
1≤|S|≤105
S contains only lowercase English letters.

Example Input :
3
part
partypartiparty
yemaihuyemericarhaiauryahapartyhorahihai

Example Output :
part
pawripartipawri
yemaihuyemericarhaiauryahapawrihorahihai

Explanation :
Example case 1: There is no substring "party" in the original string.
Example case 2: The original string has 2 substrings "party".
Example case 3: There is only a single substring "party" in the original string.

'''
T = int(input())
while T != 0:
    s = input()
    s = s.replace("party", "pawri")
    print(s)
    T -= 1
