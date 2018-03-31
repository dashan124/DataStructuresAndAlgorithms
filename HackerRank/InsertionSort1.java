import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

 class InsertionSort{
    
    

   
	/*Function to sort array using insertion sort*/
	void sort(int arr[])
	{
		int n = arr.length;
		for (int i=1; i<n; ++i)
		{
			int key = arr[i];
			int j = i-1;

			/* Move elements of arr[0..i-1], that are
			greater than key, to one position ahead
			of their current position */
			while (j>=0 && arr[j] > key)
			{
				arr[j+1] = arr[j];
				j = j-1;
					printArray(arr);
			}
			arr[j+1] = key;
	//
	//	for(int i=0;i<n;i++){
		  //  System.out.print(arr[i]+" ");
		}
		}
	

	/* A utility function to print array of size n*/
	static void printArray(int arr[])
	{
		int n = arr.length;
		for (int i=0; i<n; ++i)
			System.out.print(arr[i] + " ");

		System.out.println();
	}
    
/* Tail starts here */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] arr = new int[s];
        for(int i=0;i<s;i++){
            arr[i]=in.nextInt(); 
        }
        
		InsertionSort ob = new InsertionSort();	 
		ob.sort(arr);
        printArray(arr);
        //insertIntoSorted(arr);
    }
}
    
    
    
 
