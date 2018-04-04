import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    static int bonAppetit(int n, int k, int b, int[] ar) {
        // Complete this function
        int sum=0;
        int cost,rs,t;
        for(int i=0;i<n;i++){
            sum=sum+ar[i];
        }
        cost=sum-ar[k];
        rs=cost/2;
        t=b-rs;
       
            return(t);
        
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int b = in.nextInt();
        int result = bonAppetit(n, k, b, ar);
        if(result==0){
            System.out.println("Bon Appetit");
        }
        else{
        System.out.println(result);
        }
    }
}
