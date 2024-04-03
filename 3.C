#include<stdio.h>
int main()
{
     int n, i;
     float sum=1.0;

     printf("Enter n value ");
     scanf("%d",&n);
     
     printf("1");

     for(i=2;i<=n;i++)
     {
         printf(" + 1/%d",i);
         sum+=(1.0/i);
     }

     printf("= %f\n", sum);

     return 0;
}

