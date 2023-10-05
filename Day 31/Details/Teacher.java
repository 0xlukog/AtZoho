package Details;

class Teacher {
    private int teacherId;
    private String name;
    private int std;
    public Teacher(int teacherId, String name, int std) {
        this.teacherId = teacherId;
        this.name = name;
        this.std = std;
    }
    public int getTeacherId() {
        return teacherId;
    }
    public String getName() {
        return name;
    }
    public int getStd() {
        return std;
    }
}
