package com.gokul.Foods;

class CurryFood extends Food implements Cookable {

    private String base = "";

    CurryFood(String name, boolean veg, boolean healthy, String base) {
        super(name, veg, healthy);
        this.base = base;
    }

    @Override
    public void cook() {
        System.out.println("Cook " + this.getName() + ", cook the " + base + " and mix well before eating\n");
    }

}
