import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static java.lang.System.out;

/**
 * UVa 11547 - Automatic Answer
 * mguo.ca
 */
class UVa11547 {

    private static final Scanner IN = new Scanner(System.in);
    private static final List<String> ANS = new ArrayList<>();
    private static final String NEW_LINE = "\n";

    public static void main(String[] args) {
        int lines = IN.nextInt();
        for (int caseNum = 1; caseNum <= lines; caseNum++) {
            long n = IN.nextLong();
            long result = (n * 567 / 9 + 7492) * 235 / 47 - 498;
            long tens = Math.abs(result / 10 % 10);
            ANS.add(String.valueOf(tens));
        }
        out.println(String.join(NEW_LINE, ANS));
    }
}