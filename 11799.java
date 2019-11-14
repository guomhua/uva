import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static java.lang.System.out;

/**
 * UVa 11799 - Horror Dash
 * mguo.ca
 */
class UVa11799 {

    private static final Scanner IN = new Scanner(System.in);
    private static final List<String> ANS = new ArrayList<>();
    private static final String NEW_LINE = "\n";

    public static void main(String[] args) {
        int lines = IN.nextInt();
        for (int caseNum = 1; caseNum <= lines; caseNum++) {

            int numMonsters = IN.nextInt();
            int clownSpeed = 0;
            int monsterSpeed;

            for (int i = 0; i < numMonsters; i++) {
                monsterSpeed = IN.nextInt();
                if (monsterSpeed > clownSpeed)
                    clownSpeed = monsterSpeed;
            }

            ANS.add(String.format("Case %d: %d", caseNum, clownSpeed));
        }
        out.println(String.join(NEW_LINE, ANS));
    }
}