package com.objectwriter;

import java.util.ArrayList;

import com.objectwriter.model.Student;
import com.objectwriter.model.Teacher;
import com.objectwriter.service.FileService;

public class Main {
    public static void main(String[] args) {

        FileService<Student> studentfileService = new FileService<Student>("file.txt");
        // FileService<Teacher> teachFileService = new FileService<Teacher>("file.txt");
        ArrayList<Student> students = studentfileService.readObjectFromFile();
        // ArrayList<Teacher> teachers = teachFileService.readObjectFromFile();
        students.add(new Student(1, "gokdsfsul"));
        students.add(new Student(2, "naveefsdfsn"));
        // teachers.add(new Teacher(1,"teacher1"));
        // teachers.add(new Teacher(1,"teacher2"));
        
        // studentfileService.writeObjectToFile(students);
        // teachFileService.writeObjectToFile(teachers);
        for(Student s : students){
            System.out.println(s.getStudentName());
        }
        // for(Teacher t: teachers){
        //     System.out.println(t.getteacherName());
        // }

    }

}
