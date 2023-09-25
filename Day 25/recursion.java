import java.lang.Math.*;
public class recursion {
    public static int fact(int n) {
        if (n == 1) {
            return 1;
        } else {
            return n * fact(n - 1);
        }
        
    }
    @Override
    public int min(int arr[]){
        return 1;
        }

    public static void main(String[] args) {
        int n = 5;
        System.out.println(fact(n));
    }
}
