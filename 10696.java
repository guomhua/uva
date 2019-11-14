import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static java.lang.System.out;

/**
 * UVa 10696 - f91
 * mguo.ca
 */
class UVa10696 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();

    public static void main(String[] args) {
        while (true) {
            int N = IN.nextInt();
            if (N == 0) break;
            ANS.add(String.format("f91(%d) = %d", N, f91(N)));
        }
        out.println(String.join(System.lineSeparator(), ANS));
    }

    private static int f91(int N) {
        return N < 101 ? f91(f91(N + 11)) : N - 10;
    }
}