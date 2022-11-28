import java.util.Scanner;

public class Main
{
    static Scanner sc = new Scanner(System.in);
    public static void main(String args[]) {
        System.out.print("Enter The Radius Of Circle: ");
        double radius = sc.nextDouble();
      
        double area = Math.round((Math.PI * (radius * radius)) * 100d) / 100d;
        System.out.println("Circle Area is : " + area);
      
        double circumference= Math.round((Math.PI * 2 *radius) * 100d) / 100d;
        System.out.println( "Circle Circumference is:"+circumference);
   }
}
