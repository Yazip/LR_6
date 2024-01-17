package com.github.Yazip.LR3;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Genre genre = new Genre("The Story", "A prose genre that occupies an intermediate place between a novel and a short story in terms of the volume of the text, tending to a chronicle plot that reproduces the natural course of life.");
        String genre_str = genre.toString();
        System.out.println(genre_str);
        new Scanner(System.in).nextLine();
    }
}