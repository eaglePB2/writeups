import java.util.*;



public class M{

    static Set<String> permutations;
    static Set<String> result = new HashSet<String>();

    public static Set<String> permutation(String string) {
        permutations = new HashSet<String>();

        int n = string.length();
        for (int i = n - 1; i >= 0; i--) 
        {
            shuffle(string.charAt(i));
        }
        return permutations;
    }

    private static void shuffle(char c) {
        if (permutations.size() == 0) {
            permutations.add(String.valueOf(c));
        } else {
            Iterator<String> it = permutations.iterator();
            for (int i = 0; i < permutations.size(); i++) {

                String temp1;
                for (; it.hasNext();) {
                    temp1 = it.next();
                    for (int k = 0; k < temp1.length() + 1; k += 1) {
                        StringBuilder sb = new StringBuilder(temp1);

                        sb.insert(k, c);

                        result.add(sb.toString());
                    }
                }
            }
            permutations = result;
            //'result' has to be refreshed so that in next run it doesn't contain stale values.
            result = new HashSet<String>();
        }
    }

    public static void main(String[] args) {
        Scanner t=new Scanner(System.in);
        String input = t.next();
        Set<String> result = permutation(input);
        System.out.println(result.size());
        Iterator<String> it = result.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
    }
}
