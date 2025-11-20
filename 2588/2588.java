import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int firstInt = scanner.nextInt();
        int secondInt = scanner.nextInt();
        String secondString = String.valueOf(secondInt);
        System.out.println(Character.getNumericValue(secondString.charAt(2)) * firstInt);
        System.out.println(Character.getNumericValue(secondString.charAt(1)) * firstInt);
        System.out.println(Character.getNumericValue(secondString.charAt(0)) * firstInt);
        System.out.println(firstInt * secondInt);
    }
}