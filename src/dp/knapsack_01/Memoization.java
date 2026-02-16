package dp.knapsack_01;
import java.util.Arrays;

public class Memoization{

    public int knapsack(int[] wt, int[] val, int W, int n){
        int[][] dp= new int[n+1][W+1];
        for (int i = 0; i <= n; i++) {
            Arrays.fill(dp[i], -1); // only for 1D arr
        }
        // base condition
        if (n == 0 || W == 0) return 0;

        if(dp[n][W]!= -1){
            return dp[n][W];
        }

        // choice diagram
        if (wt[n - 1] <= W) {
            return dp[n][W]=Math.max(
                    val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1),
                    knapsack(wt, val, W, n - 1)
            );
        } else {
            return dp[n][W]=knapsack(wt, val, W, n - 1);
        }
    }
}