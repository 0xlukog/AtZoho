import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;

public class ShyamGanesh {
    public static void main(String[] args) {
        HashMap<Integer, Integer> diffValue = new HashMap<>();
        int arr[] = { 5, 8, 2, 4, 6, 6 };
        HashSet<Integer> s = new HashSet<>();
        for (int x : arr) {
            s.add(x);
        }
        ArrayList<Integer> array = new ArrayList<>(s);
        int maxDiff =0;
        for (int i = 0; i < array.size(); i++) {
            int curr = array.get(i);
            if (i == 0) {
                int next = array.get(i+1);
                diffValue.put(curr, next - curr);
            } else if (i == array.size() - 1) {
                int prev = array.get(i-1);
                diffValue.put(curr, curr-prev);
            }
            else{
                int next = array.get(i+1);
                int prev = array.get(i-1);
                diffValue.put(curr,((next-curr)+(curr-prev)));
            }
            maxDiff = maxDiff<diffValue.get(curr)?diffValue.get(curr):maxDiff;
        }
        for(int x : diffValue.keySet()){
            if(maxDiff == diffValue.get(x)){
                System.out.println(x);
            }
        }
    }
}
