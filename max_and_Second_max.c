#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int arr[15],i,max,sec_max,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    sec_max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>sec_max && arr[i]!=max)
        {
            sec_max=arr[i];
        }
    }
    printf("%d\n%d",max,sec_max);
    return 0;
}
