#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int n,last,first,sum=0;
    scanf("%d",&n);
    last=n%10;
    do{
        n=n/10;
    }
    while(n>10);
        first=n;
        sum=first+last;
        printf("%d",sum);
    
    return 0;
}
