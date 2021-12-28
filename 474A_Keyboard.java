import java.util.Scanner;

public class A_Keyboard {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        // int t = input.nextInt();

        // while (t != 0) {
        String c = input.nextLine();
        String s = input.nextLine();

        String s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
        String res = "";
        int len = s.length();

        if (c.charAt(0) == 'R') {

            for (int i = 0; i < len; i++) {
                for (int j = 0; j < s1.length(); j++) {

                    if (s.charAt(i) == s1.charAt(j)) {
                        res += s1.charAt(j - 1);
                    }
                }
            }
        } else {

            for (int i = 0; i < len; i++) {
                for (int j = 0; j < s1.length(); j++) {

                    if (s.charAt(i) == s1.charAt(j)) {
                        res += s1.charAt(j + 1);
                    }
                }
            }
        }

        System.out.println(res);

        // t--;
        // }
        input.close();

    }
}