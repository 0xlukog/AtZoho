package Details;

import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void displayMenu() {
        System.out.println("\n 1. student details : ");
        System.out.println("\n 2. teacher details : ");
        System.out.println("\n 3. Exit");
    }

    public static void main(String[] args) {
        HashMap<Integer, Detail> schoolDetails = new HashMap<>();

        Scanner s = new Scanner(System.in);

        displayMenu();
        int choice = Integer.parseInt(s.nextLine());
        String name;
        int id;
        int std;

        while (true) {
            if (choice == 1) {

                System.out.println("\nEnter student name : ");
                name = s.nextLine();
                System.out.println("\nEnter student id :");
                id = Integer.parseInt(s.nextLine());
                System.out.println("\nEnter class of student in number : ");
                std = Integer.parseInt(s.nextLine());
                Student student = new Student(id, name, std);
                if (schoolDetails.containsKey(std)) {
                    schoolDetails.get(std).students.add(student);
                } else {
                    schoolDetails.put(std, new Detail());
                    schoolDetails.get(std).students.add(student);
                }

            } else if (choice == 2) {
                System.out.println("\nEnter teacher name : ");
                name = s.nextLine();
                System.out.println("\nEnter teacher id :");
                id = Integer.parseInt(s.nextLine());
                System.out.println("\nEnter class of teacher in number : ");
                std = Integer.parseInt(s.nextLine());
                Teacher teacher = new Teacher(id, name, std);
                if (schoolDetails.containsKey(std)) {
                    schoolDetails.get(std).teachers.add(teacher);
                } else {
                    schoolDetails.put(std, new Detail());
                    schoolDetails.get(std).teachers.add(teacher);
                }
            } else {
                break;
            }
            displayMenu();
            choice = Integer.parseInt(s.nextLine());
        }

        for (int x : schoolDetails.keySet()) {
            System.out.println("Details of class : "+x+"\n\n");
            for (Student student : schoolDetails.get(x).students) {
                System.out.println("Student name : " + student.getName());
                System.out.println("Student Class : " + student.getStd());
                System.out.println("Student id : " + student.getStudentId());
            }
            for (Teacher teacher : schoolDetails.get(x).teachers) {
                System.out.println("Teacher name : " + teacher.getName());
                System.out.println("Teacher Class : " + teacher.getStd());
                System.out.println("Teacher id : " + teacher.getTeacherId());
            }
        }
    }
}
