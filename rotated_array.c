#include<stdio.h>

void rotate(int a[],int n,int time)
{
	int i,j;
	for(i=0;i<time;i++)
	{
		/*int temp=a[n-1];
		a[n-1]=a[1+i];
		a[1+i]=temp;*/
		for(j=n-1;j>0;j--)
		{
			int temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
		}
	}
}

int main()
{
	int a[20],i,n,time;
	printf("Enter the size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of times you want to rotate");
	scanf("%d",&time);
	rotate(a,n,time);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
