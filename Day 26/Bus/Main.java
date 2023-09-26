import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        boolean logedin = false;
        int userID = -1;

        Scanner s = new Scanner(System.in);

        ArrayList<Passenger> passengers = new ArrayList<>();

        Bus buses[] = new Bus[2];
        buses[0] = new Bus(101);
        buses[1] = new Bus(102);

        while (true) {
            if (!logedin) {

                Menu.clearScreen(); // new line
                Menu.displayLogin();

                int choice = Integer.parseInt(s.nextLine());

                if (choice == 1) {
                    System.out.println("Enter your name : ");
                    String newUserName = s.nextLine();
                    
                    int newId = ++Passenger.totalPassengers;
                    passengers.add(new Passenger(newUserName, newId));
                    System.out.println("New id is " + newId);
                } else if (choice == 2) {
                    System.out.print("Enter your id : ");
                    userID = Integer.parseInt(s.nextLine());
                    logedin = true;
                } else {
                    System.out.println("invalid choice");
                }
            } else {
                Menu.clearScreen();
                Menu.displayMenu();
                int choice = Integer.parseInt(s.nextLine());
                if (choice == 1) {
                    for (Passenger p : passengers) {
                        if (p.getId() == userID) {
                            Menu.displayBusInfo(buses);
                            System.out.print("\nEnter the bus Number : ");
                            int busChoice = Integer.parseInt(s.nextLine());
                            System.out.print("\nEnter the seats needed : ");
                            int seats = Integer.parseInt(s.nextLine());
                            if ((busChoice == 1 || busChoice == 2) && ((buses[busChoice - 1].maxBusCapacity - buses[busChoice - 1].bookedSeats) >= seats)) {
                                BookBus.bookTickets(userID, buses[busChoice - 1].getBusNumber(), seats, p);
                                buses[busChoice - 1].bookedSeats += seats;
                            } else {
                                System.out.println("Bus number is invalid or Bus dont have enough seats");
                            }

                        }
                    }
                } else if (choice == 2) {
                    for (Passenger p : passengers) {
                        if (p.getId() == userID) {
                            System.out.println("Id - " + p.getId() + "| Bus number -  " + p.getBusNumber()
                                    + "| No. of seats booked " + p.getNumberOfSeats());
                        }
                    }
                } else if (choice == 3) {
                    userID = -1;
                    logedin = false;
                } else {
                    System.out.println("invalid choice");
                }
            }
        }
    }
}

class Menu {
    static void displayLogin() {
        System.out.println("1. New User\n\n");
        System.out.println("2. Already Registerd\n\n");
    }

    static void displayMenu() {
        System.out.println("1. Book Tickets\n\n");
        System.out.println("2. View MyTickets\n\n");
        System.out.println("3. Logout\n\n");
    }

    static void clearScreen() {
        System.out.println("\n");
    }

    static void displayBusInfo(Bus buses[]) {
        for (int i = 0; i < buses.length; i++) {
            System.out.println("Bus - " + (i + 1) + " - Number - " + buses[i].getBusNumber() + " - Available Seats - "
                    + (Bus.maxBusCapacity - buses[i].bookedSeats));
        }
    }
}

class Bus {
    final static int maxBusCapacity = 55;
    int bookedSeats = 0;
    private int busNumber;

    public int getBusNumber() {
        return busNumber;
    }

    public void setBusNumber(int busNumber) {
        this.busNumber = busNumber;
    }

    Bus(int busNumber) {
        this.busNumber = busNumber;
    }
}

class BookBus {

    public static int bookTickets(int id, int busNumber, int numberOfTickets, Passenger p) {
        if (id == p.getId()) {
            p.setBusNumber(busNumber);
            p.setNumberOfSeats(p.getNumberOfSeats() + numberOfTickets);
        } else {
            return -1;
        }

        return 0;
    }

}

class Passenger {
    static int totalPassengers = 0;
    private String name;
    private int NumberOfSeats;
    private int id;
    private int busNumber;

    public int getNumberOfSeats() {
        return NumberOfSeats;
    }

    public void setNumberOfSeats(int numberOfSeats) {
        NumberOfSeats = numberOfSeats;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getBusNumber() {
        return busNumber;
    }

    public void setBusNumber(int busNumber) {
        this.busNumber = busNumber;
    }

    Passenger(String name, int id) {
        this.name = name;
        this.id = id;
    }
}
