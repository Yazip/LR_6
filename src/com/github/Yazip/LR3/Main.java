package com.github.Yazip.LR3;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Publisher<String> publisher1 = new Publisher<String>("ЭКСМО", "123308, г. Москва, ул. Зорге, д.1, стр.1.", "+7 (495) 411-68-86", "info@eksmo.ru");
        publisher1.getPublisherData();
        Publisher<Integer> publisher2 = new Publisher<Integer>("МИФ", "Москва, м. Пушкинская, Тверская, Чеховская, Большой Козихинский пер., д. 7, стр. 2, 2-й этаж, оф. 24", 591101, "support@m-i-f.ru");
        publisher2.getPublisherData();
        new Scanner(System.in).nextLine();
    }
}