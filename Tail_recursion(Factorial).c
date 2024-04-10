#include<stdio.h>

int fact(int n,int a)
{
	if(n==1||n==0)
	return a;
	else
	return ((fact((n-1),(n*a))));
}

int main()
{
	int n,a=1;
	scanf("%d",&n);
	a=fact(n,a);
	printf("%d",a);
	return 0;
}
