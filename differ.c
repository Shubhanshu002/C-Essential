#include<stdio.h>

void differ(int arr[],int n)
{
	int max=arr[0];
	int sec_max=arr[0];
	int i,diff;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			sec_max=max;
			max=arr[i];
		}
		else if(arr[i]>sec_max && arr[i]!=max)
		{
			sec_max=arr[i];
		}
		diff=max-sec_max;
	}
	
	printf("%d%d%d",max,sec_max,diff);
}

int main()
{
	int arr[10];
	int n,i=0;
	scanf("%d",&n);
	printf("Enter array Elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	differ(arr,n);
	return 0;
	
}
