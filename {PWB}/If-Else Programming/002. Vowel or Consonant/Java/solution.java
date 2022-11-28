import java.util.Scanner;
import java.io.*;
import java.lang.*;

public class Main
{
	public static void main(String args[])
    {
        char ch;
        Scanner sc = new Scanner(System.in);
 
        System.out.print("Enter an Alphabet To Check : \n");
        ch = sc.next().charAt(0);
        
        ch = Character.toUpperCase(ch);
 
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            System.out.print("Vowel");
        }
        else
        {
            System.out.print("Consonant");
        }
    }
}
