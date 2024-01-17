package com.github.Yazip.LR3;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        AuthorTranslator author_translator1 = new AuthorTranslator();
        AuthorTranslator author_translator2 = new AuthorTranslator("Маршак");
        AuthorTranslator author_translator3 = new AuthorTranslator("Чуковский", "К.И.", "Родился в...", "Английский");
        author_translator1.setAuthorTranslatorData("Пастернак", "Б.Л.", "Родился...", "Английский");
        author_translator1.getAuthorTranslatorData();
        author_translator2.getAuthorData();
        author_translator3.getAuthorTranslatorData();
        new Scanner(System.in).nextLine();
    }
}