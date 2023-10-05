package com.livingThings;

import com.livingThings.interfaces.Crawlers;
import com.livingThings.interfaces.Walkers;
import com.livingThings.parent.LivingThing;

public class WalkableReptiles extends LivingThing implements Walkers, Crawlers{
    
    int numberOfLimbs;
    final String species = "Reptiles";

    public int getNumberOfLimbs() {
        return numberOfLimbs;
    }

    public void setNumberOfLimbs(int numberOfLimbs) {
        this.numberOfLimbs = numberOfLimbs;
    }

    @Override
    public void crawl() {
        System.out.println("Crawling ... ");
    }

    @Override
    public void walk() {
        System.out.println("Walking .... ");
    }

    @Override
    public void run() {
        System.out.println("Running .... ");
    }
    public String toString() {
        return "Species : "+ this.species+" Name : " + this.getName() + " " + "has " + getNumberOfLimbs() + " limbs";
    }
    
}
