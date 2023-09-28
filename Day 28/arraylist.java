import java.util.ArrayList;;
public class arraylist extends ArrayList<Integer>{
    public static void main(String[] args) {
        arraylist list = new arraylist();
        for(int i=0;i<=10;i++){
            list.add(i);
        }
        
        list.removeRange(0,10);
        for(int x: list){
            System.out.println(x);
        }
    }
}