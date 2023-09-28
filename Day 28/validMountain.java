public class validMountain {
    public static void main(String[] args) {
        Solution s = new Solution();
        int arr[] = {14,82,89,84,79,70,70,68,67,66,63,60,58,54,44,43,32,28,26,25,22,15,13,12,10,8,7,5,4,3};
        System.out.println((s.validMountainArray(arr)));
    }
}
class Solution {
    public boolean validMountainArray(int[] arr) {
        boolean increasing=true;
        int prev = arr[0];
        int Icount=0;
        int Dcount=0;
        for(int i=1;i<arr.length;i++){
            int x = arr[i];
            if(increasing){
                if(x<prev){
                    increasing=false;
                    Dcount++;
                    prev = x;
                }
                else if(x==prev){
                    return false;
                }
                else
                {
                    prev=x;
                    Icount++;
                }
            }else{
                if(x>=prev){
                    return false;
                }
                else{
                    Dcount++;
                    prev=x;
                }
            }
        }
        if(Icount==arr.length-1 || Dcount == arr.length-1){
            return false;
        }
        else{
            return true;
        }
    }
}