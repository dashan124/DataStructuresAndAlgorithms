import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            int val=scan.nextInt();
            arr[i]=val;
        }
        Arrays.sort(arr);
        if(n%2!=0){
            System.out.println(arr[n/2]);
        }
    }
}