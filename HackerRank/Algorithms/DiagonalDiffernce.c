#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum=0,sum1=0,ans,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    for(int i=0;i<n;i++)
        {
        sum=sum+a[i][i];
        sum1=sum1+a[i][n-1-i];
         }
    
    if(sum1>sum)
        {
        ans=sum1-sum;
        printf("%d",ans);
    }
    else
        {
        ans=sum-sum1;
        printf("%d",ans);
    }
    return 0;
}
