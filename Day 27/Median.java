import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;

public class Median {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int y=nums1.length;
      
        ArrayList<Integer> merged =  new ArrayList<>();
        for(int x: nums1) merged.add(x);
        for(int x: nums2) merged.add(x);
        int length  = merged.size();
        if(length%2==1){
            double median = merged.get(length/2);
            return median;
        }
        else{
            double median = ((double )merged.get(length/2) +(double)merged.get((length/2)-1))/2;
            return median;
        }
    }
    public static void main(String[] args) {
        int nums1[] = {1,2};
        int nums2[] ={3};
        System.out.println(findMedianSortedArrays(nums1, nums2));
    }
}
