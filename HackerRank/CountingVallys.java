import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s=new Scanner(System.in);
        int N=s.nextInt();
          String array = s.next();
        int count =0;
        int sea_level=0;
        boolean belowSea=false;
        for(int i=0;i<N;i++){
            if(array.charAt(i)=='U'){
                sea_level++;
                
            }
            if(array.charAt(i)=='D'){
                sea_level--;
                
            }
             //Handle transitions
            if(!belowSea && sea_level < 0)
            {
                count++;
                belowSea = true;
            }
            
            if(sea_level >= 0)//We are back above sea level
                belowSea = false;
        }
        
         System.out.println(count);   
            
        }
    }
