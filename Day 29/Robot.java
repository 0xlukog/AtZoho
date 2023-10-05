public class Robot {
    public static void main(String[] args) {
        String moves = "UD";
        Solution s = new Solution();
        System.out.println(s.judgeCircle(moves));;
    }
}

class Solution {
    public boolean judgeCircle(String moves) {
            int x=0,y=0;
            for(int i=0;i<moves.length();i++){
                char c = moves.charAt(i);
                if(c =='U')x++;
                else if(c =='D')x--;
                else if(c =='L')y--;
                else y++;
            }
            if(x==0 && y==0){
                return true;
            }
            else return false;
    }
}