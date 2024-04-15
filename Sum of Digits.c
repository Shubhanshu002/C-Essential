 #include <stdio.h>
 int digits(int n)
 {
     int temp=n;
     if(n==0)
     return 0;
     else {
     return(n%10 + digits(n/10));
     }
 }
 
 int main()
 {
     int n;
     scanf("%d",&n);
     int s=digits(n);
     printf("%d ",s);
     return 0;
 }
