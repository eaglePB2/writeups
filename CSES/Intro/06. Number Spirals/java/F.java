import java.util.Scanner;



public class F{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        int lines = t.nextInt();
        int ans = 0;
        while(lines >0){ 
            lines--;
            Scanner v=new Scanner(System.in);
            int x=v.nextInt();  
            int y=v.nextInt();  
            x -= 1;
            y -= 1;
            ans =(y*y)+y + 1;
            if (x<0 || y<0){
                System.out.println("no solution");   
            }
            if(x==y){
                System.out.println(ans);
            } else if (y<x){
                ans = (x*x)+x + 1;
                if (x%2 == 0){
                System.out.println(ans - (x-y)); 
                } else {
                System.out.println(ans + (x-y)); 
                }
            } else if(x%2 == 0){
                System.out.println(ans - (y-x)); 
            } else {
                System.out.println(ans + (y-x)); 
            }
        }

    }
}