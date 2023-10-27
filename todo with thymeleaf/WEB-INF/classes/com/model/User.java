package com.model;

import java.util.ArrayList;

public class User {
    private String name;
    private String password;
    private ArrayList<String> todo = new ArrayList<>();
    public User(String name, String password){
        this.name = name;
        this.password = password;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getPassword() {
        return password;
    }
    public void setPassword(String password) {
        this.password = password;
    }
    public ArrayList<String> getList(){
        return this.todo;
    }
    public void addItem(String item){
        todo.add(item);
    }
    public void modifyItem(int index, String item){
        todo.set(index, item);
    }
    public void removeItem(int index){
        todo.remove(index);
    }
    // @Override
    // public String toString() {
    //     return "\"name\" :"+"\""+name+"\",\"password \":"+"\""+password+"\"";
    // }
}
