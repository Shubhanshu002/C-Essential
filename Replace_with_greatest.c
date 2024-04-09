#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int a[20],i,max=0,j,temp,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]>max)
       {
           max=a[i];
           temp=i;
           
       }
       
   }
   for(j=temp+1;j<=n;j++)
    {
     a[j]=max;
     }
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
    return 0;
}
