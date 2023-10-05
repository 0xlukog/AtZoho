package com.livingThings;

import com.livingThings.interfaces.Walkers;
import com.livingThings.parent.LivingThing;

public class Mammals extends LivingThing implements Walkers {

    private int numberOfLimbs;
    final String species = "Mammal";

    public int getNumberOfLimbs() {
        return numberOfLimbs;
    }

    public void setNumberOfLimbs(int numberOfLimbs) {
        this.numberOfLimbs = numberOfLimbs;
    }

    @Override
    public void walk() {
        System.out.println("walking .... ");
    }

    @Override
    public void run() {
        System.out.println("Running ....");
    }

    public String toString() {
        return "Species : "+ this.species+" Name : " + this.getName() + " " + "has " + getNumberOfLimbs() + " limbs";
    }
}
