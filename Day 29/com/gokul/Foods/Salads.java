package com.gokul.Foods;

class Salads extends Food implements Cookable {
    private String ingredient;
    final boolean cookable = false;

    Salads(String name, boolean veg, boolean healthy, String ingredient) {
        super(name, veg, healthy);
        this.ingredient = ingredient;
    }

    @Override
    public void cook() {
        System.out.println("Cut and chop the " + ingredient + " and mix them and serve\n");
    }

}
