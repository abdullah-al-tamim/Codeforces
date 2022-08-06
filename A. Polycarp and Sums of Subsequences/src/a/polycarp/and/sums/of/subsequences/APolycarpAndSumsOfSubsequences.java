/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package a.polycarp.and.sums.of.subsequences;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class APolycarpAndSumsOfSubsequences {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int[] b = new int[7];
            int[] a = new int[3];
            for (int j = 0; j < b.length; j++) {
                b[j] = sc.nextInt();
            }
            a[0] = b[0];
            a[1] = b[1];
            for(int k = 2; k<b.length; k++){
                if (a[0]+a[1]+b[k]==b[6]) {
                    a[2] = b[k];
                    break;
                }
            }
            for (int j = 0; j < 3; j++) {
                System.out.print(a[j]+" ");
            }
            System.out.println();
        }
    }

}
