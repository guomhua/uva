import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static java.lang.System.out;

/**
 * UVa 100 - The 3n + 1 problem
 * mguo.ca
 */
class UVa100 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();
    private static final String NEW_LINE = "\n";

    public static void main(String[] args) {

        while (IN.hasNextInt()) {

            int i = IN.nextInt();
            int j = IN.nextInt();

            int min = Math.min(i, j);
            int max = Math.max(i, j);


            int maxCycleLength = 0;
            for (int nextInt = min; nextInt <= max; nextInt++) {
                int cycleLength = getCycleLength(nextInt);
                if (cycleLength > maxCycleLength) maxCycleLength = cycleLength;
            }

            ANS.add(String.format("%d %d %d", i, j, maxCycleLength));

        }

        out.println(String.join(NEW_LINE, ANS));
    }

    private static int getCycleLength(int n) {
        int cycleLength = 1;
        while (n != 1) {
            n = n % 2 == 1 ? n * 3 + 1 : n / 2;
            cycleLength++;
        }
        return cycleLength;
    }
}