//import things
import java.util.*;

public class A{
public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    long d_input = input.nextInt();
    while(d_input>1){
        if (d_input %2 == 0){
            d_input/=2;
        } else {
            d_input=3*d_input+ 1;
        }
        System.out.print(d_input + " ");
        
    }
}
}