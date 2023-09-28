package calculator;

import java.util.Scanner;

public class Main {
    public static void main(String args[]) {

        Scanner s = new Scanner(System.in);

        ArithmeticOperations calc = new ArithmeticOperations();
        calc.displayFunctions();
        int choice = Integer.parseInt(s.nextLine());
        while (choice != 8) {
            switch (choice) {
                case 1: {

                    System.out.print("Enter number 1 : ");
                    int x = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 2 : ");
                    int y = Integer.parseInt(s.nextLine());

                    System.out.println(x + " + " + y + " = " + calc.add(x, y));
                    break;
                }
                case 2: {

                    System.out.print("Enter number 1 : ");
                    int x = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 2 : ");
                    int y = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 3 : ");
                    int z = Integer.parseInt(s.nextLine());

                    System.out.println(x + " + " + y + " + " + z + " = " + calc.add(x, y, z));
                    break;
                }
                case 3: {
                    System.out.print("Enter number 1 : ");
                    int x = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 2 : ");
                    int y = Integer.parseInt(s.nextLine());

                    System.out.println(x + " - " + y + " = " + calc.sub(x, y));
                    break;
                }
                case 4: {
                    System.out.print("Enter number 1 : ");
                    int x = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 2 : ");
                    int y = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 3 : ");
                    int z = Integer.parseInt(s.nextLine());

                    System.out.println(x + " - " + y + " - " + z + " = " + calc.sub(x, y, z));
                    break;
                }
                case 5: {

                    System.out.print("Enter number 1 : ");
                    int x = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 2 : ");
                    int y = Integer.parseInt(s.nextLine());

                    System.out.println(x + " x " + y + " = " + calc.multiply(x, y));
                    break;
                }
                case 6: {

                    System.out.print("Enter number 1 : ");
                    int x = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 2 : ");
                    int y = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 3 : ");
                    int z = Integer.parseInt(s.nextLine());
                    System.out.println(x + " x " + y + " x " + z + " = " + calc.multiply(x, y, z));
                    break;
                }
                case 7: {

                    System.out.print("Enter number 1 : ");
                    int x = Integer.parseInt(s.nextLine());
                    System.out.print("Enter number 2 : ");
                    int y = Integer.parseInt(s.nextLine());

                    System.out.println(x + " / " + y + " = " + calc.multiply(x, y));
                    break;
                }
                default:
                    break;

            }
            System.out.println("Enter 8 to exit or menu option to continue");
            choice = Integer.parseInt(s.nextLine());
        }

    }
}
