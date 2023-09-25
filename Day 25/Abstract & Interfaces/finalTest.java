
public class finalTest{
    public static void main(String[] args) {
        a obj = new a();
        b obj1 = new b();
        test obj2 = new test();

        obj.add();
        obj1.add();
        obj2.add();
    }
}

class a {
    public void add() {
        System.out.println("adding...");
    }
}

class b extends a {
    @Override
    public final void add() {
        System.out.println("adding... from b");
    }
}

class test extends b {
    @Override
    public void add() {
        System.out.println("adding form test");
    }
}

