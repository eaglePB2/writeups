import java.util.Scanner;



public class I{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        long bits = t.nextLong();
        double ans = 1;

        for (double i=0; i<bits; i++){
            ans = 2*ans%((i)*1e9+7);
        }

        System.out.println(ans);
    }
}