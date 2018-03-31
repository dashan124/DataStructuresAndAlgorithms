import java.io.*;
import java.util.*;

 class Solution {

    public static void main(String[] args) {
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan=new Scanner(System.in);
        int L = scan.nextInt();
        int R = scan.nextInt();
        int max=0;
        for(int i=L;i<R;i++){
            for(int j=i;j<R;j++){
                //System.out.println(i^j);
                 if((int)(i^j)>max){
                    max=i^j;
            }
        }
        
        
    }System.out.println(max);
}}