import java.util.*;
public class q4 {
    public static void main(String[] args) {
    int[][] arr=new int[4][4];
    Random rand= new Random();
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=rand.nextInt(10);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            System.out.print(arr[i][j] + " ");
        }
        System.out.println();
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                int temp=arr[i][j];
                arr[i][j]=arr[i][3-j];
                arr[i][3-j]=temp;
            }
        }
    }
    System.out.println("After Swapping diagonals");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            System.out.print(arr[i][j] + " ");
        }
        System.out.println();
    }
  }
}
