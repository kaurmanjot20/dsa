package dp.knapsack_01;

public class Knapsack{
    public static void main(String[] args){
        int[] wt={1,3,4,5};
        int[] val={ 1,4,5,7};
        int W=7;
        int n=wt.length;

        Recursive RCsol= new Recursive();
        int RCmaxProfit= RCsol.knapsack(wt,val,W,n);
        System.out.println("RC Max Profit: "+ RCmaxProfit);

        Memoization M_sol= new Memoization();
        int Memoize_maxProfit= M_sol.knapsack(wt,val,W,n);
        System.out.println("Memoization Max Profit: "+ Memoize_maxProfit);

        Tabulation T_sol= new Tabulation();
        int Tabulation_maxProfit= T_sol.knapsack(wt,val,W,n);
        System.out.println("Tabulation Max Profit: "+ Tabulation_maxProfit);
    }
}