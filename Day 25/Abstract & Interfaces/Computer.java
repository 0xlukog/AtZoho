public class Computer {

    public static void main(String[] args) {
        Brand hp = new Brand();
        hp.checkRunning();
        System.out.println(hp.age);
    }

}

class Brand extends machine {
    
    @Override
    void checkRunning() {
        System.out.println("Running..");
    }
    // @Override
    // public void turnOff(){
    //     System.out.println("Turning off");
    // }
}

abstract class machine {
    final int age=100;
    
    void turnOn() {
        System.out.println("System is turning on....");
    }

    abstract void checkRunning();

    public final void turnOff() {
        System.out.println("System is turning off....");
    }
}