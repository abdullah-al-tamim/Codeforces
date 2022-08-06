/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package r762.square.string;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class R762SquareString {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            String s = sc.next();
            int c = 0;
            char[] ch = s.toCharArray();
            if (ch.length % 2 == 0) {
                int j = ch.length / 2;
                for (int k = 0; k < ch.length / 2; k++) {
                    if (ch[k] == ch[j]) {
                        c++;
                    }
                    j++;
                }
                if (c == ch.length / 2) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            } else System.out.println("NO");
        }
    }

}
