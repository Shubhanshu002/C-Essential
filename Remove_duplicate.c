#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 int a[20],n,i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=i+1;j<n;j++)
     {
       if(a[i]==a[j])
       {
           for(int k=j;k<n-1;k++)
           {
               a[k]=a[k+1];
           }
           j--;
           n--;
           
           
       }  
     }
 }
 
 for(i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }
    return 0;
}
