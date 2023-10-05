import java.util.*;
public class bfs {
    public static void main(String[] args) {
        
    }
}
class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        HashMap<Integer,Boolean> visited= new HashMap<>();
        Queue<Integer> queue = new LinkedList<>();
        int pos=0;
        for(int x : rooms.get(0)){
           
        }
            visited.put(pos++, true);
        }
        for(boolean x : visited.values()){
            if(!x){
                return false
            }
        }
        return true;
    }
}