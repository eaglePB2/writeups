import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        int ascii;
        Scanner myObj = new Scanner(System.in);
        char str = myObj.next().charAt(0);
        ascii= str;
        System.out.println("ASCII Value is: " + ascii);
    }
}
