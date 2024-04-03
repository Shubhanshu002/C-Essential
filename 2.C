#include<stdio.h>
int main()
{
	int n , i , j,k=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(k==n+1)
			{
				break;
			}
			else
			{
			printf("%d ",k);
			k++;
		}
		}
		printf("\n");
	}
	return 0;
}
