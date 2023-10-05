package com.gokul.Foods;

public class Snacks extends FastFood {

    Snacks(String name, boolean isVeg, boolean isHealthy, String ingredients, String cookingMeduim) {
        super(name, isVeg, isHealthy, ingredients, cookingMeduim);
    }

    Snacks(String name, boolean isVeg, boolean isHealthy, String ingredients) {
        super(name, isVeg, isHealthy, ingredients, "");
    }

    @Override
    public void cook() {
        System.out.println(this.getName()+" cook seivadhu ilai kadayil vaangavum  : )\n");
    }

}
