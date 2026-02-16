package dp.knapsack_01;

public class Recursive {
    public int knapsack(int[] wt, int[] val, int W, int n){
        //base condition
        if(n==0|| W==0){
            return 0;
        }

        // choice diagram
        if(wt[n-1]<=W){
            return Math.max(val[n-1] + knapsack(wt, val, W-wt[n-1],n-1),
                    knapsack(wt,val, W, n-1));
        } //else if (wt[n-1]>W) {
            else{
            return knapsack(wt,val, W, n-1);
        }
    }
}