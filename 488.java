import java.util.*;

import static java.lang.System.out;

/**
 * UVa 488 - Triangle Wave
 * mguo.ca
 */
class UVa488 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();

    public static void main(String[] args) {

        int cases = IN.nextInt();
        for (; cases > 0; cases--) {
            int amplitude = IN.nextInt();
            int frequency = IN.nextInt();

            List<String> graphs = new ArrayList<>();
            for (; frequency > 0; frequency--)
                graphs.add(getAmpGraph(amplitude));
            ANS.add(String.join("\n\n", graphs));
        }
        out.println(String.join("\n\n", ANS));
    }

    private static String getAmpGraph(int amplitude) {
        if (amplitude == 1)
            return "1";

        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= amplitude; i++) {
            for (int j = 1; j <= i; j++) sb.append(i);
            sb.append('\n');
        }
        for (int i = amplitude - 1; i >= 1; i--) {
            for (int j = i; j >= 1; j--) sb.append(i);
            if (i != 1) sb.append('\n');
        }
        return sb.toString();
    }
}