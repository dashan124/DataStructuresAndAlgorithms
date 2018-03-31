import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        
        int T = Integer.parseInt(in.nextLine());
        
        for (int i = 0; i < T; i++) {
            char[] w = in.nextLine().toCharArray();
            
            System.out.println(findLexGreaterPerm(w));
        }
    }
    
    public static char[] findLexGreaterPerm (char[] w) {
        
        // we need to replace some char from right with some on the left which is smaller than right char
        int len = w.length;
        
        for (int i = len - 2; i > -1; i--) {
            int swapIndex = -1;
            
            for (int j = i+1; j < len; j++) {
                
                if (w[j] > w[i] ) {
                    if (swapIndex > -1 && w[j] < w[swapIndex]) {
                        swapIndex = j;
                    }
                    else if (swapIndex < 0){
                        swapIndex = j;
                    }
                    
                }
            }
            
            if (swapIndex > i) {
                char t = w[swapIndex];
                w[swapIndex] = w[i];
                w[i] = t;
                
                Arrays.sort(w, i+1, len);
                return w;
            }
        }
         
        return "no answer".toCharArray();
    }
}