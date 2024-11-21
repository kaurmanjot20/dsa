import java.util.Random;

public class QuickSort {

    public static void main(String[] args) {
        int[] arr = {10, 7, 8, 9, 1, 5};
        System.out.println("Original Array:");
        ArrayUtils.printArray(arr);

        QuickSort.sort(arr);

        System.out.println("Sorted Array:");
        ArrayUtils.printArray(arr);
    }

    // Public method to sort an array using QuickSort
    public static void sort(int[] arr) {
        quickSort(arr, 0, arr.length - 1);
    }

    // Recursive QuickSort logic
    private static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            // Choose pivot and move it to the end
            int pivotIndex = choosePivot(arr, low, high);
            swap(arr, pivotIndex, high);

            // Partition the array and get the pivot's final position
            int pi = partition(arr, low, high, arr[high]);

            // Recursively sort the left and right subarrays
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    // Partition the array based on the pivot
    private static int partition(int[] arr, int low, int high, int pivot) {
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high); // Place pivot in correct position
        return i + 1;
    }

    // Choose the pivot using different strategies
    private static int choosePivot(int[] arr, int low, int high) {
        // Strategy 1: Last element (current implementation)
        return high;

        // Strategy 2: First element
        // return low;

        // Strategy 3: Random element
        // Random random = new Random();
        // return low + random.nextInt(high - low + 1);

        // Strategy 4: Median of three (first, middle, last)
        // int mid = low + (high - low) / 2;
        // return medianOfThree(arr, low, mid, high);
    }

    // Median of three pivot selection
    private static int medianOfThree(int[] arr, int a, int b, int c) {
        if ((arr[a] > arr[b]) ^ (arr[a] > arr[c])) return a;
        else if ((arr[b] < arr[a]) ^ (arr[b] < arr[c])) return b;
        else return c;
    }

    // Utility method to swap two elements in the array
    private static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

class ArrayUtils {
    // Utility method to print an array
    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
