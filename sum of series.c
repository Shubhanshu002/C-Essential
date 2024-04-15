 #include<stdio.h>
 
 void sum(int n)
 {
     int i,sum=0;
     for(i=1;i<=n;i++)
     {
        printf("%d ",i);
        sum+=i;
        
     }
     printf("\n");
     printf("%d",sum); 
 }
 
 int main()
 {
     int n;
     scanf("%d",&n);
     sum(n);
     return 0;
 }
