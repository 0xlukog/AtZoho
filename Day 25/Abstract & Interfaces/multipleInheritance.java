import java.util.Stack;

public class multipleInheritance {
    Integer x = 5;
    public static void main(String[] args) {
        temp t = new temp();
        t.call();
        System.out.println(t.x);
    }
}

interface mother {
    abstract void call();
}

class father {
    protected int x =10;
    private final void call() {
        System.out.println("calling");
    }
}

class temp extends father implements mother {

    @Override
    public void call() {
        System.out.println("Calling.... form overriding");
    }
}