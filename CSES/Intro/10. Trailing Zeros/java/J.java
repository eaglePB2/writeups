import java.util.Scanner;



public class J{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        long input = t.nextLong();
        long ans = 1;

        ans = input/5 + input/25;

        System.out.println(ans);
    }
}