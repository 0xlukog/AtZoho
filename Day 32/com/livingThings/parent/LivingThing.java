package com.livingThings.parent;

public class LivingThing {

    private boolean alive;
    private String speciesName;

    public LivingThing() {
        this.alive = true;
    }

    public boolean isAlive() {
        return alive;
    }

    public void die() {
        this.alive = false;
    }

    public void setName(String speciesName){
        this.speciesName = speciesName;
    }

    public String getName(){
        return speciesName;
    }

    public void eat() {
        System.out.println("Eating....");
    }

    public void grow() {
        System.out.println("Growing....");
    }

}