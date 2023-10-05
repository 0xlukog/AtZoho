package com.livingThings;

import com.livingThings.interfaces.Glider;
import com.livingThings.interfaces.Walkers;
import com.livingThings.parent.LivingThing;

public class Birds extends LivingThing implements Walkers, Glider {

    final String species = "Bird";

    @Override
    public void fly() {
        System.out.println("Flying .... ");
    }

    @Override
    public void walk() {
        System.out.println("Walking .... ");
    }

    @Override
    public void run() {
        System.out.println("Running .... ");
    }
    public String toString(){
        return "Species : "+this.species+" Name : "+this.getName()+" "+"has 2 limbs";
    }
}
