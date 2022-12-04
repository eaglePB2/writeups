import java.util.Scanner;



public class K{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        int lines = t.nextInt();
        while(lines >0){ 
            lines--;
            Scanner v=new Scanner(System.in);
            int a=v.nextInt();  
            int b=v.nextInt();  
            if((a+b)%3 == 0 && (2*a > b || 2*b > a)){
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}