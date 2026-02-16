package dp.subset_sum;

public class SubsetSum {
    public static void main(String[] args){
        int[] arr={1,3,7,8,10 };
        int sum = 11;
        int n= arr.length;

        TopDown T_sol= new TopDown();
        boolean maxSum = T_sol.subsetSum(arr, sum, n);
        System.out.println("Subset sum exists? :" + maxSum);
    }
}
