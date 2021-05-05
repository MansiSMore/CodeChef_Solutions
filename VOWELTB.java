/*
Write a program to take a character (C) as input and check whether the given character is a vowel or a consonant.

NOTE:− Vowels are 'A', 'E', 'I', 'O', 'U'. Rest all alphabets are called consonants.

Input :
First line will contain the character C.

Output :
Print "Vowel" if the given character is a vowel, otherwise print "Consonant".

Constraints :
C will be an upper case English alphabet

Sample Input :
Z
Sample Output :
Consonant

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
	    char ch = sobj.next().charAt(0);
	    
	    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	        System.out.println("Vowel");
	    else
	        System.out.println("Consonant");

	}
}
