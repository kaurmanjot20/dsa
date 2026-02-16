package dp.climbing_stairs;

public class ClimbingStairs {
    public static void main(String[] args){
        int n=5;

        Solution0 solObj0 = new Solution0();
        int sol0 = solObj0.climbStairs(n);

        Solution1 solObj = new Solution1();
        int sol = solObj.climbStairs(n);

        System.out.println("Solution0: " + sol0);
        System.out.println("Solution: " + sol);
    }
}
