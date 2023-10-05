package com.livingThings;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        valuePrinter printer = new valuePrinter<>();

        HashMap<String, String> links = Extra.initHashMap();
        ArrayList<Amphibians> amphibians = new ArrayList<>();
        ArrayList<Mammals> mammals = new ArrayList<>();
        ArrayList<Birds> birds = new ArrayList<>();
        ArrayList<Fishes> fishes = new ArrayList<>();
        ArrayList<WalkableReptiles> walkableReptiles = new ArrayList<>();
        ArrayList<NonWalkableReptiles> nonWalkableReptiles = new ArrayList<>();
        String name;
        while (true) {
            Extra.displayMeny();
            int choice = Integer.parseInt(s.nextLine());
            if (choice == 1) {
                System.out.println("Enter the name of the species ... ");
                name = s.nextLine();
                System.out.println("Enter the number of limbs of the species ... ");
                int numberOfLimbs = Integer.parseInt(s.nextLine());
                Mammals m = new Mammals();
                m.setName(name);
                m.setNumberOfLimbs(numberOfLimbs);
                mammals.add(m);

            } else if (choice == 3) {
                System.out.println("Enter the name of the species ... ");
                name = s.nextLine();
                Fishes m = new Fishes();
                m.setName(name);
                fishes.add(m);
            } else if (choice == 2) {
                System.out.println("Enter the name of the species ... ");
                name = s.nextLine();
                Birds m = new Birds();
                m.setName(name);
                birds.add(m);
            } else if (choice == 4) {
                name = s.nextLine();
                System.out.println("Enter the number of limbs of the species ... ");
                int numberOfLimbs = Integer.parseInt(s.nextLine());
                WalkableReptiles m = new WalkableReptiles();
                m.setName(name);
                m.setNumberOfLimbs(numberOfLimbs);
                walkableReptiles.add(m);
            } else if (choice == 5) {
                System.out.println("Enter the name of the species ... ");
                name = s.nextLine();
                NonWalkableReptiles m = new NonWalkableReptiles();
                m.setName(name);
                nonWalkableReptiles.add(m);
            } else if (choice == 6) {
                name = s.nextLine();
                System.out.println("Enter the number of limbs of the species ... ");
                int numberOfLimbs = Integer.parseInt(s.nextLine());
                Amphibians m = new Amphibians();
                m.setName(name);
                m.setNumberOfLimbs(numberOfLimbs);
                amphibians.add(m);
            } else if (choice == 7) {
                printer.printAnimal(nonWalkableReptiles);
                printer.printAnimal(walkableReptiles);
                printer.printAnimal(birds);
                printer.printAnimal(mammals);
                printer.printAnimal(fishes);
                printer.printAnimal(amphibians);                
            } else if (choice == 8) {
                String link = "";
                Extra.displayLinks();
                choice = Integer.parseInt(s.nextLine());
                link = Extra.getLink(choice, links);
                try {
                    Process p = Runtime.getRuntime().exec("firefox " + link);
                    p.waitFor();
                } catch (Exception e) {
                    System.out.println("Can't execute command.!");
                }
            } else {
                break;
            }

        }
        s.close();
    }
}
