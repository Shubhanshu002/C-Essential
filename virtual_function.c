#include<stdio.h>

int add(int a , int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a , int b)
{
	int c;
	c=a-b;
	return c;
}
int mul(int a , int b)
{
	int c;
	c=a*b;
	return c;
}
int div(int a , int b)
{
	int c;
	c=a/b;
	return c;
}

int main()
{
	int ch;
	int (*fun[])(int,int)={add,sub,mul,div};
	printf("Enter\n 0 - For Addition\n 1 - For Subtraction\n 2 - Multiplication \n 3 - Division\n");
	scanf("%d",&ch);
	//printf("\n");
	//(fun[ch])(a,b);
	printf("%d",(fun[ch])(3,4));
}
