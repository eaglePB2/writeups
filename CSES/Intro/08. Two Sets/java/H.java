import java.util.Scanner;



public class H{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        int n = t.nextInt();
        if(n*(n+1)/2%2 == 1){
            System.out.println("NO");
        }
        else {
            int small = 1, large = n;
            int odd_fillet, i_fill;
            if(n%2 == 0){
                odd_fillet = 0;
                i_fill = 0;
            } else {
                odd_fillet = 1;
                i_fill = -1;
                small = 0;
            }
                System.out.println(n/2);
                for (int i=n/4; i>i_fill; i--){
                    if(small !=0){
                        System.out.print(small + " ");
                    }
                    small++; 
                    System.out.print(large + " ");
                    large--;
                }
                System.out.println("");
                System.out.println((n/2) + odd_fillet);
                for (int i=i_fill; i<n/4; i++){
                    System.out.print(small + " ");
                    small++; 
                    System.out.print(large + " ");
                    large--;
                }

            }
            
                

        }
           }