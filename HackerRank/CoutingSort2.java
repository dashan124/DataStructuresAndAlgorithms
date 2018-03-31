import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            int val = scan.nextInt();
            a[i]=val;
        }
        Arrays.sort(a);
        for(int i=0 ; i<n;i++){
        System.out.print(a[i]+" ");
    }
    }
}