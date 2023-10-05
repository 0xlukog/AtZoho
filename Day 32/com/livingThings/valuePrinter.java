package com.livingThings;
import java.util.ArrayList;

public class valuePrinter<T> {
    public void printAnimal(ArrayList<T> animals){
        for(T animal : animals){
            System.out.println(animal.toString());
        }
    }
}
