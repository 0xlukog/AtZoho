package com.todo;

import java.util.ArrayList;

public class ToDo {
    private ArrayList<String> toDoList;
    private FileHandler f = new FileHandler();
    public ToDo() {
        try {
            this.toDoList = f.initArrayList();
        } catch (Exception e) {
            System.out.println(e.getMessage());
            System.out.println(e.getStackTrace());
        }
    }
    public int getListSize(){
        return toDoList.size();
    }
    public ArrayList<String> displayToDo() {
        return toDoList;
    }

    public void addToDo(String todo) {
        toDoList.add(todo);
    }

    public void removeTodo(int index) {
        toDoList.remove(index);
    }
    public void save(){
        f.saveArrayList(toDoList);
    }
    public void clear(){
        toDoList.clear();
        f.clearFile();
    }
}
