#include<stdio.h>
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int n,i;
	printf("Enter the no.of.terms:");
	scanf("%d",&n);
	printf("Fibonacci Series!!!\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",fib(i));
	}
	return 0;
}
