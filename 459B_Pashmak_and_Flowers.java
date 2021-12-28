import java.util.Scanner;

public class B_Pashmak_and_Flowers {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        long a[] = new long[n];
        long max = -1, min = 1000000000, mxCnt = 0, mnCnt = 0;

        for (int i = 0; i < n; i++) {

            a[i] = input.nextLong();

            if (a[i] > max) {
                max = a[i];
                mxCnt = 1;

            } else if (a[i] == max) {
                mxCnt++;
            }

            if (a[i] < min) {
                min = a[i];
                mnCnt = 1;

            } else if (a[i] == min) {
                mnCnt++;
            }
        }
        if (max == min) {
            System.out.println("0 " + (long) ((mnCnt - 1) * mnCnt) / 2);

        } else {
            System.out.println((max - min) + " " + (long) (mnCnt * mxCnt));
        }

        input.close();
    }
}
