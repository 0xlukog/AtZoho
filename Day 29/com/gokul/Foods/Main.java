package com.gokul.Foods;

public class Main {
    public static void printDashes(){
        System.out.println("-----------------------------------------------------------");
    }
    public static void main(String[] args) {
        
        Burger burger = new Burger("CheeseBurger", true, false, "cheese letuce patty","oven");

        Salads salad = new Salads("Veg salad", true, true, "lettuce tomato carrot");
        
        CurryFood rasamSadam = new CurryFood("Rasam", true, true, "Steamed rice");
        
        Snacks pori = new Snacks("pori", true, false, "puffed rice");

        CurryFood chapathi = new CurryFood("Channa Masala", true, true, "Chapathi");

        System.out.println();

        burger.cook();
        burger.isVeg();
        burger.isHealthy();

        printDashes();

        salad.cook();
        salad.isVeg();
        salad.isHealthy();

        printDashes();

        rasamSadam.cook();
        rasamSadam.isVeg();
        rasamSadam.isHealthy();

        printDashes();

        pori.cook();
        pori.isVeg();
        pori.isHealthy();

        printDashes();

        chapathi.cook();
        chapathi.isVeg();
        chapathi.isHealthy();

    }   
}
