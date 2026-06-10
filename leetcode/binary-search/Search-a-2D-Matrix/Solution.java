class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;          // row
        int n = matrix[0].length;       // col
        int l = 0;
        int r = m*n-1;
         while (l <= r) {
            int mid = l + (r - l) / 2;

            int row = mid / n;   //To convert a flattened index mid back into (row, col) using / or %
            int col = mid % n;

            int value = matrix[row][col];

            if (value == target) {
                return true;
            } else if (value < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return false;
    }
}