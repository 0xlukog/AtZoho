import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class minimumCount {

    public static int count(String str) {

        HashMap<Character, Integer> charCount = new HashMap<>();
        HashMap<Character, Integer> charPosition = new HashMap<>();

        for(char c : str.toCharArray()){

            if(charCount.containsKey(c)){

                charCount.put(c,charCount.get(c)+1);

            }
            else{

                charCount.put(c, 1);

            }
        }

        Set<Map.Entry<Character,Integer>> entry = charCount.entrySet();

        ArrayList<Map.Entry<Character,Integer>> entryList = new ArrayList<>(entry);

        Collections.sort(entryList, (ob1,ob2)->{

            return ob2.getValue()>ob1.getValue()?1:ob2.getValue()==ob1.getValue()?0:-1;

        });

        int pos=0;
        int count=0;

        for(Map.Entry<Character,Integer>x:entryList){

            char c = x.getKey();

            charPosition.put(c, pos);

            if(pos<=25){

                pos+=3;

            }
            else{

                count++;
                pos=count;

            }
        }

        int click=0;

        for(char c : str.toCharArray()){

            int t = charPosition.get(c);

            if(t%3==0){

                click++;

            }
            else if(t%3==1){

                click+=2;

            }
            else{

                click+=3;

            }

        }

        return click;

    }

    public static void main(String[] args) {
        String input = "abcdak";
        System.out.println(count(input));
    }
}
