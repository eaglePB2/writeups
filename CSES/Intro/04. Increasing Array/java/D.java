import java.util.Scanner;



public class D{
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int arr[]=new int[n];
        int max_value = 0;
        int ans = 0;
        for(int i=0;i<n;++i){//for reading array
            arr[i]=input.nextInt();
            max_value = Math.max(arr[i], max_value);
            ans += max_value - arr[i];
        }
        System.out.println(ans);

    }
}