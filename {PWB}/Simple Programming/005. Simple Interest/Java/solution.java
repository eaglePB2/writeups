import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        float amount,period,rate,si;

        System.out.println("Enter Principle Amount :");
        amount = scanner.nextFloat();
      
        System.out.println("Enter rate annually : ");
        rate = scanner.nextFloat();
        
        System.out.println("Enter time in years : ");
        period = scanner.nextFloat();

        si = (amount*period*rate)/100;

        System.out.println("Simple Interest is : " + si);
    }
}
