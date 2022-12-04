//import things
import java.util.*;

public class B {
    public static void main(String[] args) {
        int n,sum = 0;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        int input_array[] = new int[n]; 
        
        for(int i=0; i <=n-2; i++){
            input_array[i] = input.nextInt();
            sum += input_array[i];
        }
        int p = (n*(n + 1))/2 - sum;
        System.out.print(p);
        }
    
    }
