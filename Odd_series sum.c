#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the maximum value:");
	scanf("%d",&n);
	printf("The odd number lists are:\n");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
			sum=sum+i;
		}
	}
	printf("\nThe sum of odd number series:%d",sum);
	return 0;
}
