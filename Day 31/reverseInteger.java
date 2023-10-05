public class reverseInteger {
    public static int reverse(int x) {
        long rev = 0;
        while(x!=0){
           int rem = x%10;
            rev = (rev *10)+rem; 
            x/=10;
            if(rev >Integer.MAX_VALUE)return 0;
        }
        return (int)rev;
    }
    public static void main(String[] args) {
        int x= -123;
        System.out.println((reverse(Integer.MAX_VALUE)));    }
}
