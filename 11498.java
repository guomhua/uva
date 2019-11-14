import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static java.lang.System.out;

/**
 * UVa 11498 - Division of Nlogonia
 * mguo.ca
 */
class UVa11498 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();
    private static final String NEW_LINE = "\n";

    public static void main(String[] args) {
        while (true) {

            int lines = IN.nextInt();
            if (lines == 0)
                break;

            int divisionX = IN.nextInt();
            int divisionY = IN.nextInt();

            for (int caseNum = 1; caseNum <= lines; caseNum++) {

                int candidateX = IN.nextInt();
                int candidateY = IN.nextInt();

                if (candidateX == divisionX || candidateY == divisionY) {
                    ANS.add("divisa");
                    continue;
                }

                String NS = candidateY < divisionY ? "S" : "N";
                String EO = candidateX < divisionX ? "O" : "E";

                ANS.add(NS + EO);
            }
        }
        out.println(String.join(NEW_LINE, ANS));
    }
}