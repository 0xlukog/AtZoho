public class BakeCake {
    public static void main(String[] args) {
        CakeCounter counter = new CakeCounter();
        Thread t1 = new Thread(new Team(counter));
        Thread t2 = new Thread(new Team(counter));
        Team t =  new Team(counter);
        t.print();
        t.superSum();
        t1.start();
        t2.start();
        // try{
        //     t1.join();
        //     t2.join();
        // }
        // catch(Exception e){
        //     System.err.println(e.getMessage());
        // }
        System.out.println(counter.counter);
    }
}

class CakeCounter {
    int counter;

    public synchronized void increment() {
        counter++;
    }
}

class Team extends temp2 implements Runnable,temp {

    CakeCounter counter;
    Team(CakeCounter counter) {
        this.counter = counter;
    }
    @Override
    public void sum(){
        System.out.println("sum overided");
    }
    @Override
    public void print(){
        System.out.println("print overrided");
    }
    public void superSum(){
        super.print();
    }
    @Override
    public void run() {
        for(int i=0;i<2000;i++){
            counter.increment();
        }
    }

}
class temp2{
    void print(){
        System.out.println("print funciton");
    }
}
interface temp{
    default void sum(){
        System.out.println("hello");
    }
}
