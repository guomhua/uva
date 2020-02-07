import java.util.*;

import static java.lang.System.out;

/**
 * UVa 10004 - Bicoloring
 * mguo.ca
 */
class UVa10004 {

    private static Scanner IN = new Scanner(System.in);
    private static List<String> ANS = new ArrayList<>();

    private static final String COLOR_A = "A";
    private static final String COLOR_B = "B";

    private static Map<Integer, Set<Integer>> EDGE_MAP = new HashMap<>();
    private static Map<Integer, String> COLOR_MAP = new HashMap<>();

    private static void addEdge(int nodeA, int nodeB) {
        if (EDGE_MAP.containsKey(nodeA))
            EDGE_MAP.get(nodeA).add(nodeB);
        else {
            HashSet<Integer> neighbors = new HashSet<>();
            neighbors.add(nodeB);
            EDGE_MAP.put(nodeA, neighbors);
        }
    }

    public static void main(String[] args) {

        while (true) {

            int numNodes = IN.nextInt();
            if (numNodes == 0)
                break;

            buildEdges();
            ANS.add(isBicolorable() ? "BICOLORABLE." : "NOT BICOLORABLE.");
            cleanUp();
        }

        out.println(String.join("\n", ANS));
    }

    private static void buildEdges() {
        int numEdges = IN.nextInt();
        for (; numEdges > 0; numEdges--) {
            int nodeA = IN.nextInt();
            int nodeB = IN.nextInt();
            addEdge(nodeA, nodeB);
            addEdge(nodeB, nodeA);
        }
    }

    private static void cleanUp() {
        EDGE_MAP = new HashMap<>();
        COLOR_MAP = new HashMap<>();
    }

    private static boolean isBicolorable() {

        if (EDGE_MAP.isEmpty())
            return true;

        int node = EDGE_MAP.keySet().iterator().next();
        COLOR_MAP.put(node, COLOR_A);

        Queue<Integer> q = new LinkedList<>();
        q.add(node);

        boolean bicolorable = true;

        while (!q.isEmpty() && bicolorable) {
            node = q.poll();
            for (int neighborNode : EDGE_MAP.get(node)) {
                String expectedNeighborColor = COLOR_MAP.get(node).equals(COLOR_A) ? COLOR_B : COLOR_A;
                if (!COLOR_MAP.containsKey(neighborNode)) {
                    COLOR_MAP.put(neighborNode, expectedNeighborColor);
                    q.add(neighborNode);
                }
                else if (!COLOR_MAP.get(neighborNode).equals(expectedNeighborColor)) {
                    bicolorable = false;
                    break;
                }
            }
        }

        return bicolorable;
    }
}