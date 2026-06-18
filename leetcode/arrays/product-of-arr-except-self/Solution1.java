class Solution1 {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] res = new int[n];

        // Store prefix products in res
        res[0] = 1;
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }

        // Multiply by suffix products
        int suffixProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= suffixProduct;
            suffixProduct *= nums[i];
        }

        return res;
    }
}