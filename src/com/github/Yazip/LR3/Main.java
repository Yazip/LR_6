package com.github.Yazip.LR3;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Author author1 = new Author("Shukshin");
        Author author2 = new Author("Sholokhov");
        Author[] authors = {author1, author2};
        Genre genre1 = new Genre("The Story", "A prose genre that occupies an intermediate place between a novel and a short story in terms of the volume of the text, tending to a chronicle plot that reproduces the natural course of life.");
        genre1.setAuthors(authors);
        Genre genre2 = genre1.shallowClone();
        System.out.println("Мелкое клонирование:");
        genre2.getGenreData();
        Genre genre3 = genre1.deepClone();
        System.out.println();
        System.out.println("Глубокое клонирование:");
        genre3.getGenreData();
        new Scanner(System.in).nextLine();
    }
}