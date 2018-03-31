import java.io.*;
import java.util.*;

class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. 
        int count=0;
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if((i!=j)&&((ar[i]-ar[j])==k)){
                   count++; 
                }
            }
        var i=0,j=1,count=0;
    
    while(j < n) {
        var diff = nums[j] - nums[i];
        
        if (diff == k) {
            count++;
            j++;
        } else if (diff > k) {
            i++;
        } else if (diff < k) {
            j++;
        }
    }*/
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int k=scan.nextInt();
        int[] ar=new int[n];
        for(int i=0;i<n;i++){
            int val=scan.nextInt();
            ar[i]=val;
        }
        Arrays.sort(ar);
            
        int i=0,j=1,count=0;
    
    
    while(j < n) {
        int diff = ar[j] - ar[i];
        
        if (diff == k) {
            count++;
            j++;
        } else if (diff > k) {
            i++;
        }else if(diff<k){
            j++;
        }
        
        }System.out.println(count);
    }
}