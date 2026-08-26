import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        int k = sc.nextInt();

        HashSet<String> set = new HashSet<>();

        for (int i = 0; i < s.length(); i++) {
            int sum = 0;
            String sub = "";

            for (int j = i; j < s.length(); j++) {
                sum += s.charAt(j) - 'a' + 1;
                sub += s.charAt(j);

                if (sum <= k) {
                    set.add(sub);
                } else {
                    break;
                }
            }
        }

        System.out.println(set.size());

        sc.close();
    }
}`