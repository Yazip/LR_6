package com.github.Yazip.LR3;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Book book = new Book();
        Magazine magazine = new Magazine();
        book.read();
        magazine.read();
        new Scanner(System.in).nextLine();
    }
}