package Details;

class Student {
    private int studentId;
    public Student(int studentId, String name, int std) {
        this.studentId = studentId;
        this.name = name;
        this.std = std;
    }
    private String name;
    private int std;
    public int getStudentId() {
        return studentId;
    }
    public String getName() {
        return name;
    }
    public int getStd() {
        return std;
    }
}
