#include<stdio.h>
void print(int *a)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int a1[100],i;
	for(i=0;i<5;i++)
	{
	scanf("%d",&a1[i]);
	}
	print(a1);
	return 0;
}
