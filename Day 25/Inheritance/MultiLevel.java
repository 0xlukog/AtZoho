public class MultiLevel {
    public static void main(String[] args) {
        Child s = new Child();
        s.sayFamilyName();
    }
}

class GrandFather {
    String FamilyName = "Good Family";
}

class Father extends GrandFather {

}

class Child extends Father {
    void sayFamilyName() {
        System.out.println(FamilyName);
    }
}