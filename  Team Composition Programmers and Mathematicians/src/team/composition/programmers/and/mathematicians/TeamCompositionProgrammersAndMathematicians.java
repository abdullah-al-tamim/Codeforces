/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package team.composition.programmers.and.mathematicians;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class TeamCompositionProgrammersAndMathematicians {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long min = Math.min(a, b);
            long max = Math.max(a, b);
            long div;
            if (a == 0 || b == 0) {
                div = 0;
            } else if (((a + b) / (min * 4)) > 0) {
                div = (a + b) / (min * 4);
                long test1= -1, test2 = -1;
//                System.out.println(div);
                if ((div * 3) < max) {
                    test1 = max / (div * 4);
                } else if ((min * 3) < max) {
                    test2 = max / (min * 4);
                }
//                System.out.println(test1+" "+test2);
                div = Math.max(test1, test2);
            } else {
                div = (a + b) / 4;
            }
            System.out.println(div);
        }
    }

}
