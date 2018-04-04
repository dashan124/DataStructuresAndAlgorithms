import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String[] args) {
        int h;
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            h=1;
            int n = in.nextInt();
            if(n==0)
                System.out.println(h);
                while(n>0){
                if(n>0){
                h=h*2;
               n--;
            }
            if(n>0){
                h=h+1;
                n--;
            }
            }
           System.out.println(h);
         
        }
    }
}