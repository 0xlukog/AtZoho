// single inheritance example

public class Single {

    public static void main(String[] args) {
        child c = new child("Gokul");
        System.out.println(c.name+" "+c.sayLastName());
    }
}

class Father {
    String lastName = "Radhakrishnan";

    public String sayLastName() {
        return lastName;
    }
}

class child extends Father {
    String name;

    child(String name) {
        this.name = name;
    }
}