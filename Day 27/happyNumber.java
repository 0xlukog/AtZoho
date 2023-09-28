import java.util.*;
public class happyNumber {
    public static void main(String[] args) {
        Solution s = new Solution();
        HashMap<Integer,Boolean> visited=new HashMap<>();
        System.out.println((s.isHappy(Integer.parseInt(args[0]), visited)));
    }
}
class Solution {

    public static int sumof(int n){
        String number = n+"";
        int returnVal = 0;
        for(int i= number.length()-1;i>=0;i--){
            int t = Integer.parseInt(number.charAt(i)+"");
            returnVal+= t*t;
        }
        return returnVal;
    }
    public boolean isHappy(int n, HashMap<Integer,Boolean> visited) {
        if(visited.containsKey(n)){
            return false;
        }
        else if(sumof(n)==1){
            return true;
        }
        else{
            visited.put(n, true);
            return isHappy(sumof(n), visited);
        }

    }
}