//import things
import java.util.Scanner;



public class C{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String check = input.nextLine();
        char[] first = check.toCharArray();
        int count = 1;
        int max = -1;
        for(int i=0; i < check.length(); i++){
            if(i<check.length()-1 && first[i] == first[i+1]){
                count++;
            }
            else if(max < count) {
                max = count;
                count = 1;
            }
        }    
        System.out.println(max);
        } 
    }