import java.io.*;
import java.util.*;

 class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
          Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    long mask = 0b11111111111111111111111111111111L;

    for (int i=0; i<n; i++) {
       long l = sc.nextLong();
       System.out.println( ~l & mask);
    }
    }
}