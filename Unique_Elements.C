#include<stdio.h>

int main()
{
    int a1[15],i,j,n,k,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++){
         if(a1[i]==a1[j])
            count++;
    }
               for(k=i+1;k<n;k++)
               {
                   if(a1[i]==a1[k])
                   {
                       count++;
                   }
               }
            if(count==0)
            {
                printf("%d\n",a1[i]);
            }
        }
    
    
    return 0;
}
