package com.livingThings;

import com.livingThings.interfaces.Crawlers;
import com.livingThings.parent.LivingThing;

public class NonWalkableReptiles extends LivingThing implements Crawlers{

    final String species = "Reptiles";

    @Override
    public void crawl() {
        System.out.println("Crawling .... ");
    }
    public String toString(){
        return "Species : "+this.species+" Name : "+this.getName()+" "+"has no limbs";
    }
}
