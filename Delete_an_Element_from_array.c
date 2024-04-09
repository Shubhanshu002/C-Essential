#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a[20],i,flag=0,n,del;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&del);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==del)
        {
            int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;
        }
        else
        flag=0;
    }
    
    if(flag==1)
    {
        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    printf("No element found.");
    
    return 0;
}
