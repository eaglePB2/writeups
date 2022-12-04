import java.util.*;



public class N{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        int sigma=0;
        int n = t.nextInt();
        int input_array[] = new int[20]; 
        int max = input_array[0];
        for(int i=0; i <= n-1; i++){
            input_array[i] = t.nextInt();
            }
        for(int i=0; i<n; ++i){
            sigma += input_array[i];
            if (input_array[i]>max) {
                max = input_array[i];
            }
        }
        System.out.print(2*max-ans);

        }
            
                

        }