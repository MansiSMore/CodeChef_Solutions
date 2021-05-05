/*
Write a program to take two numbers as input and print their difference if the first number is greater than the second number otherwise print their sum.

Input :
First line will contain the first number (N1)
Second line will contain the second number (N2)

Output :
Output a single line containing the difference of 2 numbers (N1−N2) if the first number is greater than the second number otherwise output their sum (N1+N2).

Constraints :
−1000≤N1≤1000
−1000≤N2≤1000

Sample Input :
82
28

Sample Output :
54

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
	    int no1 = sobj.nextInt();
	    int no2 = sobj.nextInt();
        
        if(no1 > no2)
            System.out.println(no1 - no2);
        else
            System.out.println(no1 + no2);
	}
}
