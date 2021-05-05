/*
Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.
SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.

Input :
The first line contain the number of test-cases T.
The first line of each test-case contains a single integer N.

Output :
For each test case print a single line containing the string "HOSTED" if SnackDown was hosted in year N or "NOT HOSTED" otherwise (without quotes).

Constraints :
1≤T≤10
2010≤N≤2019

Example Input :
2
2019
2018

Example Output :
HOSTED
NOT HOSTED

*/
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sobj = new Scanner(System.in);
	    int T = sobj.nextInt();
	    
	    for(int i = 0; i < T; i++)
	    {
	        int no = sobj.nextInt();
	        if(no == 2010 || no == 2015 || no == 2016 || no == 2017 || no == 2019)
	            System.out.println("HOSTED");
	        else
	            System.out.println("NOT HOSTED");
	    }
	}
}
