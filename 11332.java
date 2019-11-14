import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static java.lang.System.out;

/**
 * UVa 11332 - Summing Digits
 * mguo.ca
 */
class UVa11332 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();
    private static final String NEW_LINE = "\n";

    public static void main(String[] args) {
        while (true) {

            int nextInt = IN.nextInt();
            if (nextInt == 0)
                break;

            while (nextInt >= 10) {
                nextInt = sumDigits(nextInt);
            }

            ANS.add(String.valueOf(nextInt));
        }
        out.println(String.join(NEW_LINE, ANS));
    }

    private static int sumDigits(int nextInt) {
        int digitSum = 0;
        while (nextInt >= 10) {
            digitSum += nextInt % 10;
            nextInt /= 10;
        }
        digitSum += nextInt;
        return digitSum;
    }
}