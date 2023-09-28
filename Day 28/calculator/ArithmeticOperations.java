package calculator;

class ArithmeticOperations {
    public int add(int x, int y) {
        return x + y;
    }

    public int add(int x, int y, int z) {
        return x + y + z;
    }

    public int sub(int x, int y) {
        return x - y;
    }

    public int sub(int x, int y, int z) {

        return x - y - z;
    }

    public int multiply(int x, int y) {
        return x * y;
    }

    public int multiply(int x, int y, int z) {
        return x * y * z;
    }

    public double divide(int x, int y) {
        try {
            return x / y;
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero, returning 0");
            return 0;
        }
    }

    public void displayFunctions() {

        System.out.println(" 1. 2 number Addition \n");
        System.out.println(" 2. 3 number Addition \n");
        System.out.println(" 3. 2 number Subtraction \n");
        System.out.println(" 4. 3 number Subtraction \n");
        System.out.println(" 5. 2 number Multiplication \n");
        System.out.println(" 6. 3 number Multiplication \n");
        System.out.println(" 7. Division \n");
        System.out.println(" 8. Exit");
        System.out.println("\n\nEnter your Choice : ");

    }

}
