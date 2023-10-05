import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class RoomsAndKeys {
    public static void main(String[] args) {
        Solution s = new Solution();
        int arr[][]={{1,3},{3,0,1},{2},{0}};
        List<List<Integer>> rooms = new ArrayList<>();
        for(int a[] : arr){
            rooms.add((List)Arrays.asList(a));
        }
        s.canVisitAllRooms(rooms);

    }
}

class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        Queue<Integer> q = new LinkedList<>();
        HashMap<Integer,Integer> h = new HashMap<>();
        for(Integer x : rooms.get(0)){
            q.add(x);
            h.put(0,1);
        }
        while(!q.isEmpty()){
            int key = q.remove();
            for(int x : rooms.get(key)){
                if(!h.containsKey(x)){
                    q.add(x);
                    h.put(x,1);
                }
            }
        }
        System.out.println(q.toString());
        if(h.size() == rooms.size()){
            return true;
        }
        else{
            return false;
        }
    }
}