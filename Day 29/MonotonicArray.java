public class MonotonicArray{
    public static void main(String[] args) {
        Solution s =  new Solution();
        int arr[] ={1,2,2,3};
        System.out.println(s.isMonotonic(arr));
    }
}
class Solution {
    public boolean isMonotonic(int[] nums) {
        boolean increasing = false;
        boolean decreasing = false;
        int prev = nums[0],icount=0,equal=0;
        for(int i=1;i<nums.length;i++){
            int cur  = nums[i];
            if(cur<prev){
                icount++;
            }
            else if(cur==prev){equal++;}
            prev = nums[i];
        }
        System.out.println(icount +" "+equal);
        icount+=equal;
        if(icount==nums.length-1 || icount==0){
            return true;
        }
        else{
            return false;
        }
    }
}