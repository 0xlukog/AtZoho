public class SortArrayByParity {
    public static void main(String[] args) {
        Solution s = new Solution();
        int arr[] = {3,1,2,4};
        arr=s.sortArrayByParity(arr);
        for(int x: arr){
            System.out.println(x);
        }
    }
}

class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int i=0,j=1;
        while(i<nums.length&&j<nums.length){
            if(nums[i]%2!=0){
                if(nums[j]%2==0){
                    nums[i]= nums[i]+nums[j]-(nums[j]=nums[i]);
                }
                else{j++;}
            }
            else{i++;}
        }
        return nums;
    }
}