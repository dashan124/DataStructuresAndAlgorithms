import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        // your code goes here
       //  int min = Math.abs(a[0]-a[1]);
  Arrays.sort(a);
    int min = Math.abs(a[0]-a[1]);
    for(int i = 0; i<n-1; i++){
        if(Math.abs(a[i]-a[i+1])<min){
            min = Math.abs(a[i]-a[i+1]);
        }
    }
    System.out.println(min);
    }
}

