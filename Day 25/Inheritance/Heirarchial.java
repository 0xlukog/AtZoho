public class Heirarchial {

    public static void main(String[] args) {
        child c = new child("Gokul");
        child1 c2 = new child1("Jayalakshmi");
        System.out.println(c.name + " " + c.sayLastName());
        System.out.println(c2.name + " " + c2.sayLastName());
    }
}

class Father {
    String lastName = "Radhakrishnan";

    public String sayLastName() {
        return lastName;
    }
}

class child1 extends Father {
    String name;

    child1(String name) {
        this.name = name;
    }
}

class child extends Father {
    String name;

    child(String name) {
        this.name = name;
    }
}