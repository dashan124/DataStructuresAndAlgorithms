import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class Solution {

   
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        ArrayList<Integer> al=new ArrayList<Integer>();
        for(int i=0;i<n;i++)    al.add(scan.nextInt());
        HashSet<Integer> hs=new HashSet<Integer>(al);
        ArrayList<Integer> res=new ArrayList<Integer>();
        for(Integer i : hs) res.add(Collections.frequency(al,i));
       System.out.println(n-Collections.max(res,null));
    }
}
   