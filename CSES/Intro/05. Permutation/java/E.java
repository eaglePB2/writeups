import java.util.Scanner;



public class E{
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        if (n==1){
            System.out.println(1);
            return;
        }
        else if (n<=3){
            System.out.println("no solution");
            return;
        }
        for(int i=1;i<=n;++i){
            if(i%2 == 0){
            System.out.print(i + " ");
            }
        }
        for(int i=1;i<=n;++i){
            if(i%2 == 1){
            System.out.print(i + " ");
            }
        }

    }
}