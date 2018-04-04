import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class Solution {

    

   
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for (int m = 0; m < t; m++) {
			int n = sc.nextInt();

			int[] a = new int[n];
			int sum = 0;
			for (int i = 0; i < a.length; i++) {
				a[i] = sc.nextInt();
				sum += a[i];
			}
            if(n < 2){
				System.out.println("YES");
				continue;
			}			
			int sumL = 0;
			int sumR = 0;
			int k = -1;
			
			for (int i = 0; i < a.length; i++) {
				if(sumL < sum/2){
					sumL += a[i];
					k = i;
				}else{
					sumR += a[i];
				}
			}
			
			sumL -= a[k];
			if(sumL == sumR)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}
