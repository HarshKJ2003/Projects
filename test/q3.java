import java.util.*;
public class q3 {
    public static void main(String[] args) {
        Random rand = new Random();
        int[] arr = new int[10];
        for (int i = 0; i < 10; i++) {
            arr[i] = rand.nextInt(10);
        }
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
        int max = Integer.MIN_VALUE;
        int largest = 0;
        for (int i = 0; i < 10; i++) {
            if (arr[i] > max) {
                max = arr[i];
                largest = arr[i];
            }
        }
        int secondLargest = Integer.MIN_VALUE;
        for (int i = 0; i < 10; i++) {
            if (arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
        System.out.println("Largest: " + largest);
        System.out.println("Second Largest: " + secondLargest);
    }
}
