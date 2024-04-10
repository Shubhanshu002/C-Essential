#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,j=0,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int rev[n];
    for(i=n-1;i>=0;i--)
    {
        rev[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",rev[i]);
    }
    return 0;
}
