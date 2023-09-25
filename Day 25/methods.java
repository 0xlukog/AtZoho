public class methods extends demo{ 
    public static void main(String[] args) {
        demo d = new demo();
        d.add(10, 20);
        d.add(10, 20, 30);
        d.add();

    }
}
class demo{
    public void add(){ // non parameterized method
        int a =1;
        int b=2;
        System.out.println(a+b);;
    }
    public static void add(int a, int b){// parameterized method
        System.out.println("Addition of a and b is "+(a+b));
    }
    public void add(int a, int b, int c){// method over loading
        System.out.println("Addition of a b and c is "+(a+b+c));
    }
}
