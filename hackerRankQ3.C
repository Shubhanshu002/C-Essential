#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=i;j<=n-1;j++)
        {
            printf("%d",j);
          
        }
        for(k=1;k<=i;k++)
        {
            
            printf("%d",n);
        
        }
        printf("\n");
        
    
    }
    return 0;
}
