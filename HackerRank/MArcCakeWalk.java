import java.io.*;
import java.util.*;
import java.util.Arrays;
import java.util.Collections;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] calories = new int[n];
        for(int calories_i=0; calories_i < n; calories_i++){
            calories[calories_i] = in.nextInt();
        }
        // your code goes here
      //  Arrays.sort(calories);
          Arrays.sort(calories);
        //max
        long sum=0;
        for(int calories_i=0;calories_i<n;calories_i++){
            sum+=(calories[calories_i]*Math.pow(2,(n-calories_i-1)));
        }
        System.out.println(sum);
    }
}
