/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package integer.diversity;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class IntegerDiversity {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int size = sc.nextInt();
            int[] arr = new int[size];
            for (int j = 0; j < arr.length; j++) {
                arr[j] = sc.nextInt();
            }
            int count = 1;
//            boolean flag = true;
            for (int j = 0; j < size; j++) {
                for (int k = j + 1; k < arr.length; k++) {
                    if (arr[j] == arr[k] ) {
//                        flag = false;
                        arr[j] = arr[j] * -1;
//                        break;
                    }
                }

            }
            for (int j = 0; j < arr.length; j++) {
                boolean f2 = false;
                int c2 = 1;
                for (int k = j + 1; k < arr.length; k++) {
                    if (arr[j] == arr[k]) {
                        c2++;
                    }
                }
                if (c2 > 1) {
                    count -= c2;
                } else {
                    count++;
                }
            }
            System.out.println(count);
        }
    }

}
