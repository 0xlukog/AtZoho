public class happyNum2 {
    public static int sumof(int n){
        String number = n+"";
        int returnVal = 0;
        for(int i= number.length()-1;i>=0;i--){
            int t = Integer.parseInt(number.charAt(i)+"");
            returnVal+= t*t;
        }
        return returnVal;
    }
    public static boolean isHappy(int n,int m) {
        int val = sumof(n);
        if(val==89){
            return false;
        }
        else if(val==1) {
            return true;
        }
        else{
            return isHappy(val, m);
        }
    }
    public static void main(String[] arg) {
        int t = Integer.parseInt(arg[0]);
        System.out.println(isHappy(t,t));
    }
}
