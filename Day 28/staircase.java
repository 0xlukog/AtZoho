public class staircase {
    public static int climb(int n){
        if(n==1 || n==2){
            return n;
        }
        else{
            return climb(n-1)+climb(n-2);
        }

    }
    public static void main(String[] args) {
        System.out.println(climb(6));
    }
}
