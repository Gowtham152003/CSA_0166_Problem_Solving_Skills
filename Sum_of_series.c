#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the maximum value:");
	scanf("%d",&n);
	printf("The sequence numbers:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
		sum=sum+i;
	}
	printf("\nThe sum of the numbers is:%d",sum);
	return 0;
}
