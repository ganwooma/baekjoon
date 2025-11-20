import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int first = scanner.nextInt();
        int second = scanner.nextInt();
        System.out.println(first + second);
        System.out.println(first - second);
        System.out.println(first * second);
        try {
            System.out.println(first / second);
        } catch (AbstractMethodError e) {
            return;
        }
        System.out.println(first % second);
    }
}