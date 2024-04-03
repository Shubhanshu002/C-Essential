#include<stdio.h>
#include<math.h>
int main()
{
	int i , j,n;
	const int k=9;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=0;j<i;j++)
		{
			printf("%d",k);
	}
	if(j==n)
	{
		break;
	}
	else
	printf("+");
		
		
	}
	return 0;
}
