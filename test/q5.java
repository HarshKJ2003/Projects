import java.util.*;

public class q5 {
    public static void main(String[] args) {
        int[][] arr = new int[4][4];
        Random rand = new Random();
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                arr[i][j] = rand.nextInt(10);
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        int[] temp={0,0,0,0};
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                temp[i]=temp[i]+arr[i][j];
            }
        }
        System.out.println("After sorting rows");
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
