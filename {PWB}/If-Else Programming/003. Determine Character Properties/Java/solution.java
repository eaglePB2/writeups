import java.io.*;
public class Main
{
    public static void main(String args[]) throws IOException
    {
        char key;
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Press any Key: ");
        key = (char) bf.read();

        if(key >= 97 && key <= 123) {
            System.out.println("Lowercase"); 
        }
        else if(key >= 65 && key <= 96) {
            System.out.println("Uppercase");
        }
        else if(key >= 48 && key <= 57) {
            System.out.println("Digit");
        }
        else {
            System.out.println("Symbol");
        }
    }
}
