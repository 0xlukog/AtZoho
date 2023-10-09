package com.todo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ToDo todo = new ToDo();
        Scanner s = new Scanner(System.in);
        while(true){
            Menu.todoMenu();
            int choice = Integer.parseInt(s.nextLine());

            if(choice == 1){
                System.out.print("Enter the todo : ");
                String todoitem = s.nextLine();
                todo.addToDo(todoitem);
                todo.save();
            }
            else if(choice == 2){
                todo.displayToDo();
            }
            else if(choice == 3){
                todo.displayToDo();
                System.out.println("Enter the index of item to remove");
                int remove =Integer.parseInt(s.nextLine());
                if(remove-1<todo.getListSize()){
                    todo.removeTodo(remove-1);
                    todo.save();
                }
                else{
                    System.out.println("Invalid item number");
                }
            }
            else{
                break;
            }

        }
    }
}
