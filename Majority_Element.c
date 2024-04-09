#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a[20],i,n,j,temp,count=0,max_count=0,st;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            int st=a[i];
            a[i]=a[j];
            a[j]=st;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }*/
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                temp=a[i];
                count++;
                
            }
            
        }
        
    }
    st=a[i];
            max_count++;
        /*if(count>max_count)
        {
            max_count=count;
            temp=i;
        }
    }
    if(max_count>n/2)
    
    {
        printf("%d",temp);
    }*/
    if(max_count>=count)
    {
        printf("%d ",temp);
       // printf("is the majority element.");
    }
    else
    printf("%d ",st);
    return 0;
}
