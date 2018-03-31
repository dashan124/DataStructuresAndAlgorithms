import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class Solution {

   /* static int[] getRecord(int[] s){
        // Complete this function
       
    }*/

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[n];
        for(int s_i=0; s_i < n; s_i++){
            s[s_i] = in.nextInt();
        }
       /* int[] result = getRecord(s);
        String separator = "", delimiter = " ";
        for (Integer val : result) {
            System.out.print(separator + val);
            separator = delimiter;
        }
        System.out.println("");*/
        // int n=s.length();
      //  int hs,ls;
        int count=0;
        int count1=0;
        int hs=s[0];
        for(int i=0;i<n;i++){
           if(s[i]>hs) {
               hs=s[i];
               count++;
           }
        }int ls=s[0];
        for(int j=0;j<n;j++){
            if(s[j]<ls){
                ls=s[j];
                count1++;
            }
        }
        System.out.println(count+" "+count1);
    }
}
