import java.util.Scanner;

import static java.lang.System.out;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int lines = scanner.nextInt();
        StringBuilder output = new StringBuilder();
        for (int caseNum = 1; caseNum <= lines; caseNum++) {
            int payA = scanner.nextInt();

            int high = payA;
            int low = payA;
            int mid;

            int payB = scanner.nextInt();

            if (payB > payA) {
                high = payB;
            } else low = payB;

            int payC = scanner.nextInt();

            if (payC <= low)
                mid = low;
            else mid = Math.min(payC, high);

            output.append(String.format("Case %d: %d", caseNum, mid));
            if (caseNum < lines)
                output.append("\n");
        }
        out.println(output.toString());
    }
}