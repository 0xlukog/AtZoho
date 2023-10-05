package com.gokul.Foods;

class Food {
    private String name;
    private boolean isVeg;
    private boolean isHealthy;

    Food(String name, boolean veg, boolean healthy) {
        this.isHealthy = healthy;
        this.name = name;
        this.isVeg = veg;
    }

    void cook() {
        System.out.println("Cooking");
    }
    public void isVeg() {
        System.out.println(this.name+" is "+(isVeg?"veg\n":"nonveg\n"));
    }
    public void isHealthy() {
        System.out.println(this.name+" is "+(isHealthy?"healthy\n":"not healthy\n"));
    }
    public String getName(){
        return name;
    }
}
