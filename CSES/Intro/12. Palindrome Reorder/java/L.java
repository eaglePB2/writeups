import java.util.Scanner;



public class L{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        String input = t.next();
        char[] char_array = input.toCharArray();
        /*char[] processed = new int[char_array.length];
        for (int i=0; i<char_array.length; i++) {
            processed[i] = char_array[i]; }*/
        //or be better,
        char[] processed = char_array.clone();
        int arrange = 1;
        int counter = 0;
        int fail_exec = 0;
        int fill = 0;
        int j = input.length()-1;
        if(input.length()%2 == 1){
            fill = 1;
        }
        for(int ch=65; ch < 91; ch++){
            for(int i = 0; i < input.length(); i++) {  
                if(char_array[i] == ch) {    
                    counter++;  
                }
            }
                if(counter%2 == 1){
                    fail_exec++;
                    if (fail_exec == 1 && input.length()%2 == 1){
                        processed[(j/2) + fill] = (char)ch;
                    }
                    if (fail_exec >= 2){
                        System.out.println("NO SOLUTION");
                        return;
                    }
                } else if(counter!=0) {
                    System.out.println(arrange);
                    processed[arrange] = (char)ch;
                    processed[((j/2) + fill) + arrange] = (char)ch;
                    arrange++;
                    /*for(int i=0; i<input.length(); i++){
                        System.out.print(char_array[i] + " ");
                    }*/
                }
            counter = 0;
            continue;   
        }
    }
}

