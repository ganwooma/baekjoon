import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double first = scanner.nextInt();
        double second = scanner.nextInt();
        try {
            System.out.println(first / second);
        } catch (AbstractMethodError e) {
            return;
        }
    }
}