import java.io.*;
import java.util.*;
 class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
        for(int i=0;i<t;i++){
          int n=scan.nextInt();
          int k=scan.nextInt();
          int[] sd=new int[n];
          for(int j=0;j<n;j++){
              int val=scan.nextInt();
              sd[j]=val;
          }int count=0;
            for(int l=0;l<n;l++){
                if(sd[l]<=0){
                    count++;
                }
            }
            if(count>=k){
                System.out.println("NO");
            }
            else{
                System.out.println("YES");
            }
        }
    }
}