public class trap {
    public static void main(String[] args) {
        Solution s = new Solution();
        int height[] = {21,24357,11442,1548,28714,23228,15860,4724,9642,22617,24584,31672,6818,2405,13891,28965,13626,7996,16675,29592,11248,2866,11837,13723,30000,32724,25718,18130,21796,6000,8310,3734,32205,17367,13658,23007,30035,27489,17833,103,13977,22322,2186,25868,16405,22204,28468,21878,1247,15493,16037,3323,29703,6186,29079};
        System.out.println(s.trap(height));
    }
}

class Solution {
    public static int secondLargest(int[] height) {
        int max = height[0];
        int secondMax = height[0];
        for (int i = 1; i < height.length; i++) {
            if (height[i] > max) {
                secondMax = max;
                max = height[i];

            }else if(secondMax<height[i])
            {
                secondMax=height[i];
            }
        }
        return secondMax;
    }

    public static int count(int[] temp) {
        int i = 0, j = temp.length - 1, count = 0;
        while (i<j) {
            if (temp[i] == 0)
                i++;
            else if (temp[j] == 0)
                j--;
            else break;
        }
        for (; i <= j; i++) {
            if (temp[i] == 0)
                count++;
        }
        return count;
    }

    public int trap(int[] height) {
        int secondMax = secondLargest(height);
        int trapped = 0;
        int temp[] = new int[height.length];
        while (secondMax>0) {
            for (int i = 0; i < height.length; i++) {
                if (height[i] != 0) {
                    temp[i] = 1;
                    height[i]-=1;
                } else
                    temp[i] = 0;
            }
            trapped += count(temp);
            secondMax--;
        }
        return trapped;
    }
}