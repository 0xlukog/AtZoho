import java.util.*;;

public class hash {
	public static void main(String[] args) {
		HashMap<Character,String> hash = new HashMap<>();
		for(String arg:args){
			hash.put(arg.charAt(0),arg);
		}
		// for(String value : hash.values()){
		// 	System.out.println(value);
		// 	// System.out.println(c +" "+hash.get(c));
		// }
			System.out.println((hash.get('g')));
	}
}
