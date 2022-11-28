import java.util.Scanner;
import java.io.*;

public class Main
{
	public static void main(String[] args) 
    {
        int number;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter The Number You Want to Check: ");
        number = scan.nextInt();
        if(number > 0)
        {
            System.out.println("Positive");
        }
        else if(number < 0)
        {
            System.out.println("Negative");
        }
        else
        {
            System.out.println("Neutral");
        }
    }
}
