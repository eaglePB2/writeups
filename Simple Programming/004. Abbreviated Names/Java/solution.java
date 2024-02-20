import java.util.Scanner;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    
    System.out.print("Enter your Fisrt name:\t");
    char firstname=br.readLine().charAt(0);
    
    System.out.print("\nEnter middle Name:\t");
    char midname=br.readLine().charAt(0);
    
    System.out.print("\nEnter your last name:\t");
    char lastname=br.readLine().charAt(0);
    
    System.out.println("\n Abbreviated Name:\t"+firstname+"."+midname+"."+lastname);
    }
}
