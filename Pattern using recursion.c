#include<stdio.h>

void recur(int n,int i)
{
    int j;
    if(n==0)
    {
        return;
    }
    recur(n-1,i);
    for(i=1;i<=n;i++)
    {
    for(j=i;j<=i;j++)
    {
        printf("%d ",i);
    }
    
    }printf("\n");
    
}

int main()
{
    int n;
    scanf("%d",&n);
    recur(n,n);
    return 0;
}
