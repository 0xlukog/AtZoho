package com.gokul.Foods;

class Burger extends FastFood {

    Burger(String name, boolean veg, boolean healthy, String ingredients) {
        super(name, veg, healthy, ingredients, "");
    }

    Burger(String name, boolean veg, boolean healthy, String ingredients, String cookingMeduim) {
        super(name, veg, healthy, ingredients, cookingMeduim);
    }

    @Override
    public void cook() {
        System.out.println("rendu bun eduthu stuffings vachi " +this.getCookingMeduim() + " use pannni cook seiyanum\n");
    }

}
