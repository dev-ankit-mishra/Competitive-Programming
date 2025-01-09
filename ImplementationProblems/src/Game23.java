//Problem Link-https://codeforces.com/problemset/problem/1141/A

import java.util.Scanner;

public class Game23 {
    static Integer ans = -1;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        game(a, b, 0);
        System.out.println(ans);

    }

    public static void game(int a, int b, int moves) {
        if (a > b) {
            return;
        }
        if (a == b) {
            ans = moves;

        }
        game(a * 2, b, moves + 1);
        game(a * 3, b, moves + 1);

    }
}
