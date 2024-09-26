public class q2 {
    public static void main(String[] args) {
    String name="abcde";
    for(int i=0;i<name.length();i++){
        if(i%2==0){
            System.out.print(String.valueOf(name.charAt(i)).toUpperCase());
        }else{
            System.out.print(String.valueOf(name.charAt(i)).toLowerCase());
        }
    }
    System.out.println();
  }
}
