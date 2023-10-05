package com.gokul.Foods;

class FastFood extends Food implements Cookable {
    private String ingredients;
    private String cookingMeduim;
    private boolean cookable;

    public String getIngredients() {
        return ingredients;
    }

    public void setIngredients(String ingredients) {
        this.ingredients = ingredients;
    }

    public String getCookingMeduim() {
        return cookingMeduim;
    }

    public void setCookingMeduim(String cookingMeduim) {
        this.cookingMeduim = cookingMeduim;
    }

    public boolean isCookable() {
        return cookable;
    }

    public void setCookable(boolean cookable) {
        this.cookable = cookable;
    }

    FastFood(String name, boolean veg, boolean healthy, String ingredients, String cookingMeduim) {
        super(name, veg, healthy);
        this.ingredients = ingredients;
        this.cookingMeduim = cookingMeduim;
        this.cookable = true;
    }

    FastFood(String name, boolean veg, boolean healthy, String ingredients) {
        super(name, veg, healthy);
        this.ingredients = ingredients;
        this.cookable = false;
    }

    @Override
    public void cook() {
        System.out.println("kadayil potu varaukavum\n");
    }

}
