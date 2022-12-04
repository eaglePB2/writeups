import java.util.Scanner;



public class G{
    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        long chessboard = t.nextLong();
        long ans = 0;
        for(long i=1; i<=chessboard; i++){
            ans = ((i - 1)*(i + 4)*(i*i - 3*i + 4))/2;
            System.out.println(ans);
           }
        

    }
}