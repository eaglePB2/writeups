public class Main
{
	public static void main(String[] args) {
    int i, ans=0;
    for (i = 0; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            ans += i;
        }
    }
    System.out.println(ans);
    }
}
