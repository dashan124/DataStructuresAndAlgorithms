#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// C++ program to get total xor of all subarray xors
#include <bits/stdc++.h>
using namespace std;
 
// Returns XOR of all subarray xors
int getTotalXorOfSubarrayXors(int arr[], int N)
{
    // if even number of terms are there, all
    // numbers will appear even number of times.
    // So result is 0.
    if (N % 2 == 0)
       return 0;
 
    // else initialize result by 0 as (a xor 0 = a)
    int res = 0;
    for (int i = 0; i<N; i+=2)
        res ^= arr[i];
 
    return res;
}
 
// Driver code to test above methods
int main()
{   int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
       int n;
        scanf("%d",&n);
    int arr[n];
    int j;
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
    printf("%d\n",getTotalXorOfSubarrayXors(arr, n));
    }
    return 0;
}