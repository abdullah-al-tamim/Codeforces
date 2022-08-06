/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package squares.and.cubes;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class SquaresAndCubes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long n = sc.nextLong();
            int count = 0;
            if (n == 1) {
                System.out.println(1);
            } else {
                for (int j = 2; j <= Math.sqrt(n); j++) {
                    if ((Math.pow(j, 2)) <= n) {
                        count++;
                    } 
                    if ( (Math.pow(j, 3)) <= n) {
                        count++;
                    }

                }
                System.out.println(count+1);
            }
        }
    }

}
