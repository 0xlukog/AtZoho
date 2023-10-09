package com.todo;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class FileHandler {
    public ArrayList<String> initArrayList() throws IOException {
        ArrayList<String> todo = new ArrayList<>();
        try {
            File myObj = new File("todo.txt");
            myObj.createNewFile();
            Scanner myReader = new Scanner(myObj);
            while (myReader.hasNextLine()) {
                String data = myReader.nextLine();
                todo.add(data);
            }
            myReader.close();
        } catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
        return todo;
    }

    public boolean saveArrayList(ArrayList<String> todoList) {
        boolean writen = false;
        try {
            File myObj = new File("filename.txt");
            if (myObj.createNewFile()) {

            } else {
                FileWriter myWriter = new FileWriter("todo.txt");
                for (String todo : todoList) {
                    myWriter.append(todo + "\n");
                }
                myWriter.close();
                writen = true;
            }
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
            writen = false;
        }
        return writen;
    }
}
