public class exceptionHandling {
    public static void main(String[] args) {
        int a=5;
        int b=1;
        int arr[]={1,2};
        try{
            System.out.println(a/b);
            try{
                int x = arr[5];
            }
        }
        catch(ArithmeticException e){
            System.err.println("Numbers cant be divided by zero give appopriate divider");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.err.println("Accessing invalid index");
        }
        System.out.println("The code ran successfully....");
    }
}
