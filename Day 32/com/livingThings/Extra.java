package com.livingThings;

import java.util.HashMap;

public class Extra {
    public static HashMap<String, String> initHashMap() {
        HashMap<String, String> links = new HashMap<>();
        links.put("1", "https://en.wikipedia.org/wiki/Mammal");
        links.put("6", "https://en.wikipedia.org/wiki/Amphibian");
        links.put("2", "https://en.wikipedia.org/wiki/Bird");
        links.put("3", "https://en.wikipedia.org/wiki/Fish");
        links.put("4", "https://en.wikipedia.org/wiki/Reptile");
        return links;
    }
    public static void displayMeny() {
        System.out.println("Enter your choice : ");
        System.out.println("1. Mammals");
        System.out.println("2. Birds");
        System.out.println("3. Fishes");
        System.out.println("4. Reptiles(Walkable)");
        System.out.println("5. Reptiles(Non - Walkable)");
        System.out.println("6. Amphibians");
        System.out.println("7. Display Living Things.");
        System.out.println("8. More Information");
        System.out.println("9. Exit\n");
    }

    public static void displayLinks() {
        System.out.println("Enter your choice : ");
        System.out.println("1. Mammals");
        System.out.println("2. Birds");
        System.out.println("3. Fishes");
        System.out.println("4. Reptiles(Walkable)");
        System.out.println("5. Reptiles(Non - Walkable)");
        System.out.println("6. Amphibians");
        System.out.println("7. Exit\n");
    }
    public static String getLink(int choice, HashMap<String,String>links){
        String link;
        if (choice == 1) {
            link = links.get("1");
        } else if (choice == 2) {
            link = links.get("2");
        } else if (choice == 3) {
            link = links.get("3");
        } else if (choice == 4 || choice == 5) {
            link = links.get("4");
        } else if (choice == 6) {
            link = links.get("6");
        } else {
            link="https://en.wikipedia.org/animal";
        }
        return link;
    }

}
