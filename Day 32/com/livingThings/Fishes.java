package com.livingThings;

import com.livingThings.interfaces.Swimmers;
import com.livingThings.parent.LivingThing;

public class Fishes extends LivingThing implements Swimmers {
    final String species = "Fish";

    @Override
    public void swim() {
        System.out.println("Swimming...");
    }
    public String toString(){
        return "Species : "+this.species+" Name : "+this.getName()+" "+"has no limbs";
    }
    
}
