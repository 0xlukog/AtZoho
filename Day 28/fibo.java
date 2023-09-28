public class fibo {
    public static long fibo(int n, long storage[]){
        if(n==1||n==0)
        {
            return n;
        }
        else if(storage[n]!=0){
            return storage[n];
        }
        else{
            storage[n] = fibo(n-1,storage)+fibo(n-2,storage);
            return storage[n];
        }
    }
    public static void main(String[] args) {
        long storage[] = new long[10000];
        System.out.println(fibo(Integer.parseInt(args[0]),storage));
    }
}
