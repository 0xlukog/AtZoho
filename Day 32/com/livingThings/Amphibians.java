package com.livingThings;


import com.livingThings.interfaces.Swimmers;
import com.livingThings.interfaces.Walkers;
import com.livingThings.parent.LivingThing;

public class Amphibians extends LivingThing implements Walkers,Swimmers{
    int numberOfLimbs;
    

    public int getNumberOfLimbs() {
        return numberOfLimbs;
    }

    public void setNumberOfLimbs(int numberOfLimbs) {
        this.numberOfLimbs = numberOfLimbs;
    }

    @Override
    public void swim() {
        System.out.println("Swiminng ... ");
    }

    @Override
    public void walk() {
        System.out.println("Walking ...");
    }

    @Override
    public void run() {
        System.out.println("Running .... ");
    }
    
    public String toString(){
        return "Name : "+this.getName()+" "+"has "+getNumberOfLimbs()+" limbs";
    }
}
