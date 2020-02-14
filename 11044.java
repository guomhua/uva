import java.util.*;

import static java.lang.System.out;

/**
 * UVa 11044 - Searching for Nessy
 * mguo.ca
 */
class UVa11044 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();

    public static void main(String[] args) {

        int cases = IN.nextInt();
        for (; cases > 0; cases--) {
            int n = IN.nextInt();
            int m = IN.nextInt();

            int effectiveN = n - 2;
            int totalN = effectiveN / 3;
            if (effectiveN % 3 > 0)
                totalN += 1;

            int effectiveM = m - 2;
            int totalM = effectiveM / 3;
            if (effectiveM % 3 > 0)
                totalM += 1;

            ANS.add(String.valueOf(totalM * totalN));

        }

        out.println(String.join("\n", ANS));
    }
}