// A simple Java program to demonstrate basic concepts

import java.util.Scanner;

public class Main {

    // A method to greet the user
    public static void greetUser(String name) {
        System.out.println("Hello, " + name + "! Welcome to the Java program.");
    }

    // A method to add two numbers
    public static int addNumbers(int num1, int num2) {
        return num1 + num2;
    }

    public static void main(String[] args) {
        // Creating a Scanner object to read input from the user
        Scanner scanner = new Scanner(System.in);

        // Asking the user for their name
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        // Greeting the user
        greetUser(name);

        // Asking the user for two numbers to add
        System.out.print("Enter the first number: ");
        int number1 = scanner.nextInt();
        System.out.print("Enter the second number: ");
        int number2 = scanner.nextInt();

        // Adding the numbers
        int sum = addNumbers(number1, number2);

        // Displaying the result
        System.out.println("The sum of " + number1 + " and " + number2 + " is: " + sum);

        // Closing the scanner
        scanner.close();
    }
}
