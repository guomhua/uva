import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static java.lang.System.out;

/**
 * UVa 10812 - Beat the Spread!
 * mguo.ca
 */
class UVa10812 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();

    public static void main(String[] args) {
        long lines = IN.nextLong();
        for (; lines > 0; lines--) {

            long sum = IN.nextLong();
            long diff = IN.nextLong();

            String ans = "impossible";

            long doubleLargerScore = sum + diff;

            if (doubleLargerScore % 2 == 0) {
                long largerScore = doubleLargerScore / 2;
                long smallerScore = largerScore - diff;

                if (largerScore >= 0 && smallerScore >= 0)
                    ans = String.format("%d %d", largerScore, smallerScore);
            }

            ANS.add(ans);
        }
        out.println(String.join("\n", ANS));
    }
}